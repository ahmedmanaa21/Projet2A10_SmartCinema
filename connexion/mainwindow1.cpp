#include "mainwindow1.h"
#include "ui_MainWindow12.h"
#include "client.h"
#include <QMessageBox>
#include "abonnement.h"
#include <iostream>
#include <QMessageBox>
#include  <QDebug>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include<QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QSqlQuery>
#include<QDesktopServices>
#include <QMessageBox>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
//#include <QPrintDialog>
#include<QtSql/QSqlQuery>
#include<QVariant>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouterclient_clicked()

{
    int cin=ui->lineEdit_cin->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();

   Client C(cin,nom,prenom);
    bool test=C.ajouter();
    if (test){
        ui->tab_client->setModel(E.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter un client"),
            QObject::tr("client ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
    void MainWindow::on_pushButton_suprclient_clicked()
    {
        Client C1;C1.setcin(ui->lineEdit_supcin->text().toInt());
        bool test=C1.supprimer(C1.getcin());
        if (test){
            ui->tab_client->setModel(C.afficher());
            QMessageBox::information(nullptr, QObject::tr("Supprimer un client"),
                        QObject::tr("client supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
    }
    void MainWindow::on_pushButton_modifierclient_clicked()
    {
        int cin=ui->lineEdit_cinm->text().toInt();
        QString nom=ui->lineEdit_mnom->text();
        QString prenom=ui->lineEdit_mprenom->text();

        QMessageBox msg;
        bool test=C.modifier(cin,nom,prenom);

        if(test)
        {
            ui->lineEdit_cinm->clear();
            ui->lineEdit_mnom->clear();
            ui->lineEdit_mprenom->clear();

            ui->tab_client->setModel(E.afficher());
            msg.setText("modifiction avec succes");
        }

            else {
            msg.setText("Echec au niveau de la modification d un client");
        }
        msg.exec();
    }

    void MainWindow::on_pushButton_tricin_clicked()
    {
        QMessageBox msgBox ;

        QSqlQueryModel *model = new QSqlQueryModel();
                 model->setQuery("SELECT * FROM CLIENT order by cin ASC");
                 model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
                 model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
                 model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

                 ui->tab_client->setModel(model);
                 ui->tab_client->show();
                 msgBox.setText("Tri avec succès.");
                 msgBox.exec();
    }
    void MainWindow::on_pushButton_recherchercli_clicked()
    {
               QMessageBox msgBox;
               QMessageBox msgBox1;
               bool test;
               Client C;
               int cin=0;
               QString nom=ui->lineEdit_clientrech->text();

               QString choix=ui->comboBox->currentText();
               if(choix=="prenom")
           {
            test=C.rechercher(cin,nom,prenom);
           }
           if(choix=="cin")
           {
           cin= prenom.toInt();
           test=C.rechercher(cin,nom,prenom);
           }
           if(choix=="nom")
           {
           test=C.rechercher(cin,nom,prenom);
           }

        if(test)
        {
        ui->tab_client->setModel(C.afficher());
        }
    }
    void MainWindow ::on_pushButton_ajoutabon_clicked()
    {
        int id=ui->lineEdit_id->text().toInt();
        QString num=ui->lineEditnometprenom->text();
        QString nom=ui->lineEditnom->text();
         QString prenom=ui->lineEditnom->text();
        QString type=ui->lineEdit_type->text();
        abonnement A(id,nom,prenom,type);
        bool test=A.ajouter();
        if (test){
            ui->tableView_abon->setModel(A.afficher());
            QMessageBox::information(nullptr, QObject::tr("Ajouter un abonnement"),
                        QObject::tr("abonnement ajouté.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
    }

    void MainWindow::on_pushButton_suprabon_clicked()
    {
        abonnement A1;A1.setid(ui->lineEdit_numabon->text().toInt());
        bool test=A1.supprimer(A1.getnum());
        if (test){
            abonnement A;
            ui->tableView_profil->setModel(A.afficher());
            QMessageBox::information(nullptr, QObject::tr("Supprimer un abonnement"),
                        QObject::tr("abonnement supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }
    }
    void MainWindow::on_pushButton_modifierabonnement_clicked()
    {
        abonnement A;
        int num=ui->lineEdit_mid->text().toInt();
        QString nom=ui->mnom->text();
        QString prenom=ui->lineEdit_mprenom->text();
        QString type=ui->lineEdit_mtype->text();
        QMessageBox msg;
        bool test=A.modifier(num,nom,type,prenom);

        if(test)
        {
            ui->lineEdit_mid->clear();
            ui->mnom->clear();
            ui->lineEdit_mprenom->clear();
            ui->tableView_abonnement->setModel(A.afficher());
            msg.setText("modifiction avec succes");
        }

            else {
            msg.setText("Echec au niveau de la modification d un abonnement");
        }
        msg.exec();
    }
    void MainWindow::on_trinomabonnement_clicked()
    {
        QMessageBox msgBox ;

        QSqlQueryModel *model = new QSqlQueryModel();
                 model->setQuery("SELECT * FROM ABONNEMENT order by nom ASC");
                 model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
                 model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
                 model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
                 ui->tableView_abonnement->setModel(model);
                 ui->tableView_abonnement->show();
                 msgBox.setText("Tri avec succès.");
                 msgBox.exec();
    }
