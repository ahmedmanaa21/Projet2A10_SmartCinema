#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include "authentification.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_employe->setModel(E.afficher());
    authentification A;
    ui->tableView_profil->setModel(A.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ajouteremploye_clicked()
{
    int cin=ui->lineEdit_cin->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString email=ui->lineEdit_email->text();
    QString salaire=ui->lineEdit_salaire->text();
    QString datedn=ui->dateEdit->text();
    QString num=ui->lineEdit_numero->text();
    Employe E(cin,nom,prenom,email,salaire,datedn,num);
    bool test=E.ajouter();
    if (test){
        ui->tab_employe->setModel(E.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter un employe"),
                    QObject::tr("employe ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_supremploye_clicked()
{
 Employe E1;E1.setcin(ui->lineEdit_supcin->text().toInt());
 bool test=E1.supprimer(E1.getcin());
 if (test){
     ui->tab_employe->setModel(E.afficher());
     QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                 QObject::tr("employe supprimé.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);

 }
}

void MainWindow::on_pushButton_ajoutprofil_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    QString nometprenom=ui->lineEditnometprenom->text();
    QString adresse=ui->lineEdit_adresse->text();
    QString numero=ui->lineEdit_tel->text();
    QString mdp=ui->lineEdit_mdp->text();
    authentification A(id,nometprenom,adresse,numero,mdp);
    bool test=A.ajouter();
    if (test){
        ui->tableView_profil->setModel(A.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter un admin"),
                    QObject::tr("admin ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_spradmin_clicked()
{
    authentification A1;A1.setid(ui->lineEdit_scin_admin->text().toInt());
    bool test=A1.supprimer(A1.getid());
    if (test){
        authentification A;
        ui->tableView_profil->setModel(A.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un admin"),
                    QObject::tr("admin supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
}
