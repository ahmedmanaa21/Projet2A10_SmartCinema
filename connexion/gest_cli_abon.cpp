#include "gest_cli_abon.h"
#include "ui_gest_cli_abon.h"
#include "client.h"
#include <QMessageBox>
#include "abonnement.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
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
gest_cli_abon::gest_cli_abon(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::gest_cli_abon)
{
    ui->setupUi(this);
    ui->tab_->setModel(E.afficher());
    authentification A;
    ui->tableView_profil->setModel(A.afficher());

}

gest_emp_auth::~gest_emp_auth()
{
    delete ui;
}


void on_pushButton_ajoutercli_clicked()
{
    int cin=ui->lineEdit_cin->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString email=ui->lineEdit_email->text();
    QString salaire=ui->lineEdit_salaire->text();
    QString datedn=ui->lineEdit_date->text();
    QString num=ui->lineEdit_numero->text();
    Client C(cin,nom,prenom);
    bool test=C.ajouter();
    if (test){
        ui->tab_Client->setModel(C.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter un client"),
                    QObject::tr("client ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
void on_pushButton_suprcli_clicked();
{
    Client C1;C1.setcin(ui->lineEdit_supcin->text().toInt());
    bool test=E1.supprimer(E1.getcin());
    if (test){
        ui->tab_client->setModel(C.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un client"),
                    QObject::tr("clientsupprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}
