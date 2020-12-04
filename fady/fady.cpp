#include "fady.h"
#include "ui_fady.h"
#include "film.h"
#include "salle.h"
#include "QMessageBox"
#include <QPainter>
#include <QDesktopServices>
#include <QUrl>
#include <QPdfWriter>
#include <QPrinter>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
QT_CHARTS_USE_NAMESPACE
#include <QTextStream>

fady::fady(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fady)
{

    ui->setupUi(this);

    ui->data_salle->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->data_film->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->date_film->setDate(Qdate_film::currentdate_film());
    film tmp;
    salle tmp2;
    ui->data_salle->setModel(tmp.afficher());
    ui->reference_film->setModel(tmp2.getIDs());
    
    ui->data_film->setModel(tmp2.afficher());
    ui->nom_film->setModel(tmp.getIDs());
}

fady::~fady()
{
    delete ui;
}


void fady::on_pb_ajouter_salle_clicked()
{
    film tmp(ui->nom_film->text().toInt(),ui->duree_film->text(),ui->date_film->date_film(),ui->-reference_film>currentText().toInt());
    if(tmp.ajouter())
    {
        ui->data_salle->setModel(tmp.afficher());
        ui->lineEdit_salle->setText("");
        ui->nom_film->setModel(tmp.getIDs());
        QMessageBox::information(nullptr, QObject::tr("Ajout"),
                          QObject::tr("Success.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("Ajout"),
                          QObject::tr("Erreur.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void fady::on_pb_modifier_salle_clicked()
{
    if(ui->data_salle->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Modification"),
                          QObject::tr("Veuillez Choisir un film du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        film tmp(ui->data_salle->model()->data_salle(ui->data_salle->model()->index(ui->data_salle->currentIndex().row(),0)).toInt(),ui->duree_film->text(),ui->date_film->date_film(),ui->reference_film->currentText().toInt());
        if(tmp.modifier())
        {
            ui->data_salle->setModel(tmp.afficher());
            ui->lineEdit_salle->setText("");
            ui->nom_film->setModel(tmp.getIDs());
            QMessageBox::information(nullptr, QObject::tr("Modification"),
                              QObject::tr("Success.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("Modification"),
                              QObject::tr("Erreur.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }

}

void fady::on_pb_supprimer_salle_clicked()
{

    if(ui->data_salle->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir un film du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        film tmp(ui->data_salle->model()->data_salle(ui->data_salle->model()->index(ui->data_salle->currentIndex().row(),0)).toInt(),ui->duree_film->text(),ui->date_film->date_film(),ui->reference_film->currentText().toInt());
        if(tmp.supprimer())
        {
            ui->data_salle->setModel(tmp.afficher());
            ui->lineEdit_salle->setText("");
            ui->nom_film->setModel(tmp.getIDs());
            QMessageBox::information(nullptr, QObject::tr("Suppression"),
                              QObject::tr("Success.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("Suppression"),
                              QObject::tr("Erreur.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }

}

void fady::on_data_salle_clicked(const QModelIndex &index)
{
    ui->nom_film->setText(ui->data_salle->model()->data_salle(ui->data_salle->model()->index(ui->data_salle->currentIndex().row(),0)).toString());
    ui->duree_film->setText(ui->data_salle->model()->data_salle(ui->data_salle->model()->index(ui->data_salle->currentIndex().row(),1)).toString());
    ui->reference_film->setCurrentText(ui->data_salle->model()->data_salle(ui->data_salle->model()->index(ui->data_salle->currentIndex().row(),2)).toString()
    ui->date_film->setDate(ui->data_salle->model()->data_salle(ui->data_salle->model()->index(ui->data_salle->currentIndex().row(),4)).todate_film());

}

void fady::on_lineEdit_salle_textChanged(const QString &arg1)
{

     film tmp;
     if(ui->lineEdit_salle->text()!="")
     {

     //ui->data_salle->setModel(tmp.displayClause("WHERE "+ui->recherche_salle->currentText()+"="+ui->lineEdit_salle->text()+" ORDER BY "+ui->tri_salle->currentText()));
         QString b=ui->recherche_salle->currentText();
         QString a=ui->lineEdit_salle->text();
         ui->data_salle->setModel(tmp.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
     }else
     ui->data_salle->setModel(tmp.afficher());
}

void on_rechercher_salle_currentTextChanged(const QString &arg1)
{
    film tmp;
    if(ui->lineEdit_salle->text()!="")
    ui->data_salle->setModel(tmp.displayClause("WHERE "+ui->recherche_salle->currentText()+"="+ui->lineEdit_salle->text()+" ORDER BY "+ui->tri_salle->currentText()));
    else
    ui->data_salle->setModel(tmp.afficher());
}



void fady::on_pb_ajouter_film_clicked()
{
    salle tmp(ui->id_salle->text().toInt(),ui->NOM->text(),ui->prix->text(),ui->nom_film->currentText().toInt(),ui->type->text());
    if(tmp.ajouter())
    {
        ui->data_film->setModel(tmp.afficher());
        ui->lineEdit_film->setText("");
        ui->reference_film->setModel(tmp.getIDs());
        ui->->setModel(tmp.getIDs());
        QMessageBox::information(nullptr, QObject::tr("Ajout"),
                          QObject::tr("Success.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("Ajout"),
                          QObject::tr("Erreur.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void fady::on_pb_modifier_salle_clicked()
{
    if(ui->data_film->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Modification"),
                          QObject::tr("Veuillez Choisir un Don du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        salle tmp(ui->data_film->model()->data_salle(ui->data_film->model()->index(ui->data_film->currentIndex().row(),0)).toInt(),ui->NOM->text(),ui->prix->text(),ui->nom_film->currentText().toInt(),ui->type->text());
        if(tmp.modifier())
        {
            ui->data_film->setModel(tmp.afficher());
            ui->lineEdit_film->setText("");
            ui->reference_film->setModel(tmp.getIDs());
            

            QMessageBox::information(nullptr, QObject::tr("Modification"),
                              QObject::tr("Success.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("Modification"),
                              QObject::tr("Erreur.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }
}

void fady::on_pb_supprimer_film_clicked()
{
    if(ui->data_film->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir un Donateur du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        salle tmp(ui->data_film->model()->data_salle(ui->data_film->model()->index(ui->data_film->currentIndex().row(),0)).toInt(),ui->NOM->text(),ui->prix->text(),ui->nom_film->currentText().toInt(),ui->type->text());
        if(tmp.supprimer())
        {
            ui->data_film->setModel(tmp.afficher());
            ui->lineEdit_film->setText("");
            ui->reference_film->setModel(tmp.getIDs());
            

            QMessageBox::information(nullptr, QObject::tr("Suppression"),
                              QObject::tr("Success.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("Suppression"),
                              QObject::tr("Erreur.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }
}

void fady::on_lineEdit_film_textChanged(const QString &arg1)
{
    salle tmp;
    if(ui->lineEdit_film->text()!="")
    {
   // ui->data_film->setModel(tmp.displayClause("WHERE "+ui->recherche_film->currentText()+"='"+ui->lineEdit_film->text()+"' ORDER BY "+ui->tri_film->currentText()));
        QString b=ui->recherche_film->currentText();
        QString a=ui->lineEdit_film->text();
        ui->data_film->setModel(tmp.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
    }else
    ui->data_film->setModel(tmp.afficher());
}




void fady::on_recherche_film_currentTextChanged(const QString &arg1)
{
    salle tmp;
    if(ui->lineEdit_film->text()!="")
    ui->data_film->setModel(tmp.displayClause("WHERE "+ui->recherche_film->currentText()+"='"+ui->lineEdit_film->text()+"' ORDER BY "+ui->tri_film->currentText()));
    else
    ui->data_film->setModel(tmp.afficher());
}

void fady::on_data_film_clicked(const QModelIndex &index)
{
    ui->nom_film->setText(ui->data_film->model()->data_salle(ui->data_film->model()->index(ui->data_film->currentIndex().row(),0)).toString());
    ui->duree_film->setText(ui->data_film->model()->data_salle(ui->data_film->model()->index(ui->data_film->currentIndex().row(),1)).toString());
    ui->date_film->setText(ui->data_film->model()->data_salle(ui->data_film->model()->index(ui->data_film->currentIndex().row(),2)).toString());
    ui->reference_film->setCurrentText(ui->data_film->model()->data_salle(ui->data_film->model()->index(ui->data_film->currentIndex().row(),3)).toString());
}


void fady::on_tri_salle_currentTextChanged(const QString &arg1)
{
    film tmp;
    if(ui->lineEdit_salle->text()!="")
    ui->data_salle->setModel(tmp.displayClause("WHERE "+ui->recherche_salle->currentText()+"="+ui->lineEdit_salle->text()+" ORDER BY "+ui->tri_salle->currentText()));
    else
    ui->data_salle->setModel(tmp.displayClause("ORDER BY "+ui->tri_salle->currentText()));
}

void fady::on_tri_film_currentTextChanged(const QString &arg1)
{
    salle tmp;
    if(ui->lineEdit_film->text()!="")
    ui->data_film->setModel(tmp.displayClause("WHERE "+ui->recherche_film->currentText()+"='"+ui->lineEdit_film->text()+"' ORDER BY "+ui->tri_film->currentText()));
    else
    ui->data_film->setModel(tmp.displayClause("ORDER BY "+ui->tri_film->currentText()));
}

void fady::on_print_salle_clicked()
{
    {
         //Qdate_filmTime date_filmcreation = date_film.currentdate_filmTime();
        //QString afficheDC = "date_film de Creation PDF : " + date_filmcreation.toString() ;
                       QPdfWriter pdf("C:/Users/SBS/Desktop/film.pdf");
                       QPainter painter(&pdf);
                      int i = 4000;
                           painter.setPen(Qt::blue);
                           painter.setFont(QFont("Arial", 30));
                           painter.drawText(1500,1400,"Liste Des film");
                           painter.setPen(Qt::black);
                           painter.setFont(QFont("Arial", 15));
                          // painter.drawText(1100,2000,afficheDC);
                           painter.drawRect(100,100,7300,2600);
                           //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/SBS/Desktop/img.jpg"));
                           painter.drawRect(0,3000,9600,500);
                           painter.setFont(QFont("Arial", 9));
                           painter.drawText(300,3300,"ID film");
                           painter.drawText(2300,3300,"duree_film");
                           painter.drawText(4300,3300,"ID salle1");
                           painter.drawText(6300,3300,"ID salle2");
                           painter.drawText(8300,3300,"date_film");
                           QSqlQuery query;
                           query.prepare("select * from film");
                           query.exec();
                           while (query.next())
                           {
                               painter.drawText(300,i,query.value(0).toString());
                               painter.drawText(2300,i,query.value(1).toString());
                               painter.drawText(4500,i,query.value(2).toString());
                               painter.drawText(6500,i,query.value(3).toString());
                               painter.drawText(8000,i,query.value(4).toString());
                              i = i + 500;
                           }
                           int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                               if (reponse == QMessageBox::Yes)
                               {

                                   QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/SBS/Desktop/film.pdf"));

                                   painter.end();
                               }
                               if (reponse == QMessageBox::No)
                               {
                                    painter.end();
                               }
        }

}


