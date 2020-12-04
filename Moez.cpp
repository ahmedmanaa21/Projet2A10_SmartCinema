#include "Moez.h"
#include "ui_Moez.h"
#include "stock.h"
#include "materiel.h"
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

Moez::Moez(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Moez)
{

    ui->setupUi(this);

    ui->data->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->data_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->DATE->setDate(QDate::currentDate());
    stock tmp;
    materiel tmp2;
    ui->data->setModel(tmp.afficher());
    ui->id_materiel1->setModel(tmp2.getIDs());
    ui->id_materiel2->setModel(tmp2.getIDs());
    ui->data_2->setModel(tmp2.afficher());
    ui->entree->setModel(tmp.getIDs());
}

Moez::~Moez()
{
    delete ui;
}


void Moez::on_pb_ajouter_clicked()
{
    stock tmp(ui->entree2->text().toInt(),ui->lieu->text(),ui->id_materiel1->currentText().toInt(),ui->id_materiel2->currentText().toInt(),ui->DATE->date());
    if(tmp.ajouter())
    {
        ui->data->setModel(tmp.afficher());
        ui->lineEdit_id_6->setText("");
        ui->entree->setModel(tmp.getIDs());
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

void Moez::on_pb_supprimer_3_clicked()
{
    if(ui->data->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Modification"),
                          QObject::tr("Veuillez Choisir un Stock du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        stock tmp(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),0)).toInt(),ui->lieu->text(),ui->id_materiel1->currentText().toInt(),ui->id_materiel2->currentText().toInt(),ui->DATE->date());
        if(tmp.modifier())
        {
            ui->data->setModel(tmp.afficher());
            ui->lineEdit_id_6->setText("");
            ui->entree->setModel(tmp.getIDs());
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

void Moez::on_pb_supprimer_4_clicked()
{

    if(ui->data->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir un Stock du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        stock tmp(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),0)).toInt(),ui->lieu->text(),ui->id_materiel1->currentText().toInt(),ui->id_materiel2->currentText().toInt(),ui->DATE->date());
        if(tmp.supprimer())
        {
            ui->data->setModel(tmp.afficher());
            ui->lineEdit_id_6->setText("");
            ui->entree->setModel(tmp.getIDs());
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

void Moez::on_data_clicked(const QModelIndex &index)
{
    ui->entree2->setText(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),0)).toString());
    ui->lieu->setText(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),1)).toString());
    ui->id_materiel1->setCurrentText(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),2)).toString());
    ui->id_materiel2->setCurrentText(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),3)).toString());

    ui->DATE->setDate(ui->data->model()->data(ui->data->model()->index(ui->data->currentIndex().row(),4)).toDate());

}

void Moez::on_lineEdit_id_6_textChanged(const QString &arg1)
{

     stock tmp;
     if(ui->lineEdit_id_6->text()!="")
     {

     //ui->data->setModel(tmp.displayClause("WHERE "+ui->comboBox->currentText()+"="+ui->lineEdit_id_6->text()+" ORDER BY "+ui->id_tri->currentText()));
         QString b=ui->comboBox->currentText();
         QString a=ui->lineEdit_id_6->text();
         ui->data->setModel(tmp.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
     }else
     ui->data->setModel(tmp.afficher());
}

void Moez::on_comboBox_currentTextChanged(const QString &arg1)
{
    stock tmp;
    if(ui->lineEdit_id_6->text()!="")
    ui->data->setModel(tmp.displayClause("WHERE "+ui->comboBox->currentText()+"="+ui->lineEdit_id_6->text()+" ORDER BY "+ui->id_tri->currentText()));
    else
    ui->data->setModel(tmp.afficher());
}



void Moez::on_pb_ajouter_2_clicked()
{
    materiel tmp(ui->id_materiel->text().toInt(),ui->NOM->text(),ui->prix->text(),ui->entree->currentText().toInt(),ui->type->text());
    if(tmp.ajouter())
    {
        ui->data_2->setModel(tmp.afficher());
        ui->lineEdit_id_7->setText("");
        ui->id_materiel1->setModel(tmp.getIDs());
        ui->id_materiel2->setModel(tmp.getIDs());
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

void Moez::on_pb_supprimer_5_clicked()
{
    if(ui->data_2->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Modification"),
                          QObject::tr("Veuillez Choisir un materiel du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        materiel tmp(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),0)).toInt(),ui->NOM->text(),ui->prix->text(),ui->entree->currentText().toInt(),ui->type->text());
        if(tmp.modifier())
        {
            ui->data_2->setModel(tmp.afficher());
            ui->lineEdit_id_7->setText("");
            ui->id_materiel1->setModel(tmp.getIDs());
            ui->id_materiel2->setModel(tmp.getIDs());

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

void Moez::on_pb_supprimer_6_clicked()
{
    if(ui->data_2->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir un materiel du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {
        materiel tmp(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),0)).toInt(),ui->NOM->text(),ui->prix->text(),ui->entree->currentText().toInt(),ui->type->text());
        if(tmp.supprimer())
        {
            ui->data_2->setModel(tmp.afficher());
            ui->lineEdit_id_7->setText("");
            ui->id_materiel1->setModel(tmp.getIDs());
            ui->id_materiel2->setModel(tmp.getIDs());

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

void Moez::on_lineEdit_id_7_textChanged(const QString &arg1)
{
    materiel tmp;
    if(ui->lineEdit_id_7->text()!="")
    {
   // ui->data_2->setModel(tmp.displayClause("WHERE "+ui->comboBox_2->currentText()+"='"+ui->lineEdit_id_7->text()+"' ORDER BY "+ui->id_tri2->currentText()));
        QString b=ui->comboBox_2->currentText();
        QString a=ui->lineEdit_id_7->text();
        ui->data_2->setModel(tmp.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
    }else
    ui->data_2->setModel(tmp.afficher());
}




void Moez::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    materiel tmp;
    if(ui->lineEdit_id_7->text()!="")
    ui->data_2->setModel(tmp.displayClause("WHERE "+ui->comboBox_2->currentText()+"='"+ui->lineEdit_id_7->text()+"' ORDER BY "+ui->id_tri2->currentText()));
    else
    ui->data_2->setModel(tmp.afficher());
}

void Moez::on_data_2_clicked(const QModelIndex &index)
{
    ui->id_materiel->setText(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),0)).toString());
    ui->NOM->setText(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),1)).toString());
    ui->prix->setText(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),2)).toString());
    ui->entree->setCurrentText(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),3)).toString());
    ui->type->setText(ui->data_2->model()->data(ui->data_2->model()->index(ui->data_2->currentIndex().row(),4)).toString());
}


void Moez::on_id_tri_currentTextChanged(const QString &arg1)
{
    stock tmp;
    if(ui->lineEdit_id_6->text()!="")
    ui->data->setModel(tmp.displayClause("WHERE "+ui->comboBox->currentText()+"="+ui->lineEdit_id_6->text()+" ORDER BY "+ui->id_tri->currentText()));
    else
    ui->data->setModel(tmp.displayClause("ORDER BY "+ui->id_tri->currentText()));
}

void Moez::on_id_tri2_currentTextChanged(const QString &arg1)
{
    materiel tmp;
    if(ui->lineEdit_id_7->text()!="")
    ui->data_2->setModel(tmp.displayClause("WHERE "+ui->comboBox_2->currentText()+"='"+ui->lineEdit_id_7->text()+"' ORDER BY "+ui->id_tri2->currentText()));
    else
    ui->data_2->setModel(tmp.displayClause("ORDER BY "+ui->id_tri2->currentText()));
}

void Moez::on_pushButton_2_clicked()
{
    {
         //QDateTime datecreation = date.currentDateTime();
        //QString afficheDC = "Date de Creation PDF : " + datecreation.toString() ;
                       QPdfWriter pdf("C:/Users/SBS/Desktop/stock.pdf");
                       QPainter painter(&pdf);
                      int i = 4000;
                           painter.setPen(Qt::blue);
                           painter.setFont(QFont("Arial", 30));
                           painter.drawText(1500,1400,"Liste Des stock");
                           painter.setPen(Qt::black);
                           painter.setFont(QFont("Arial", 15));
                          // painter.drawText(1100,2000,afficheDC);
                           painter.drawRect(100,100,7300,2600);
                           //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/SBS/Desktop/img.jpg"));
                           painter.drawRect(0,3000,9600,500);
                           painter.setFont(QFont("Arial", 9));
                           painter.drawText(300,3300,"ID STOCK");
                           painter.drawText(2300,3300,"LIEU");
                           painter.drawText(4300,3300,"ID materiel1");
                           painter.drawText(6300,3300,"ID materiel2");
                           painter.drawText(8300,3300,"DATE");
                           QSqlQuery query;
                           query.prepare("select * from stock");
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

                                   QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/SBS/Desktop/stock.pdf"));

                                   painter.end();
                               }
                               if (reponse == QMessageBox::No)
                               {
                                    painter.end();
                               }
        }

}


void Moez::on_pushButton22_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
                model->setQuery("select * from MATERIEL where PRIX < 5 ");
                float salaire=model->rowCount();
                model->setQuery("select * from MATERIEL where PRIX  between 5 and 10 ");
                float salairee=model->rowCount();
                model->setQuery("select * from MATERIEL where PRIX>10 ");
                float salaireee=model->rowCount();
                float total=salaire+salairee+salaireee;
                QString a=QString("moins de 5 materiels "+QString::number((salaire*100)/total,'f',2)+"%" );
                QString b=QString("entre 5 et 10 materiels "+QString::number((salairee*100)/total,'f',2)+"%" );
                QString c=QString("+10 materiels "+QString::number((salaireee*100)/total,'f',2)+"%" );
                QPieSeries *series = new QPieSeries();
                series->append(a,salaire);
                series->append(b,salairee);
                series->append(c,salaireee);
        if (salaire!=0)
        {QPieSlice *slice = series->slices().at(0);
         slice->setLabelVisible();
         slice->setPen(QPen());}
        if ( salairee!=0)
        {
                 // Add label, explode and define brush for 2nd slice
                 QPieSlice *slice1 = series->slices().at(1);
                 //slice1->setExploded();
                 slice1->setLabelVisible();
        }
        if(salaireee!=0)
        {
                 // Add labels to rest of slices
                 QPieSlice *slice2 = series->slices().at(2);
                 //slice1->setExploded();
                 slice2->setLabelVisible();
        }
                // Create the chart widget
                QChart *chart = new QChart();
                // Add data to chart with title and hide legend
                chart->addSeries(series);
                chart->setTitle("Pourcentage Par Salaire:totale de "+ QString::number(total));
                chart->legend()->hide();
                // Used to display the chart
                QChartView *chartView = new QChartView(chart);
                chartView->setRenderHint(QPainter::Antialiasing);
                chartView->resize(1000,500);
                chartView->show();

    }

