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
    QString datedn=ui->lineEdit_date->text();
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

void MainWindow::on_pushButton_tricin_clicked()
{
    QMessageBox msgBox ;

    QSqlQueryModel *model = new QSqlQueryModel();
             model->setQuery("SELECT * FROM EMPLOYE order by cin ASC");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
             model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
             ui->tab_employe->setModel(model);
             ui->tab_employe->show();
             msgBox.setText("Tri avec succès.");
             msgBox.exec();
}

void MainWindow::on_pushButton_rechercheremp_clicked()
{
    QMessageBox msgBox ;
    QSqlQueryModel *model = new QSqlQueryModel();
        int cin;
        cin=ui->lineEdit_emprech->text().toInt();
        model->setQuery("SELECT * FROM EMPLOYE where cin='cin'");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
        ui->tab_employe->setModel(model);
        ui->tab_employe->show();
        msgBox.setText("Employé trouvé.");
        msgBox.exec();
        ui->lineEdit_emprech->clear();
        QSqlQuery qry;
        qry.prepare("SELECT * FROM EMPLOYE where cin='cin'");

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->lineEdit_nom->setText(qry.value(0).toString());
                ui->lineEdit_prenom->setText(qry.value(1).toString());
                ui->lineEdit_cin->setText(qry.value(2).toString());
                ui->lineEdit_email->setText(qry.value(3).toString());
                ui->lineEdit_salaire->setText(qry.value(4).toString());
                ui->lineEdit_numero->setText(qry.value(5).toString());
                ui->lineEdit_date->setText(qry.value(6).toString());
            }
        }
}


void MainWindow::on_pushButton_ajoutprofil_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    QString nomutilisateur=ui->lineEditnometprenom->text();
    QString mdp=ui->lineEdit_mdp->text();
    authentification A(id,nomutilisateur,mdp);
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


