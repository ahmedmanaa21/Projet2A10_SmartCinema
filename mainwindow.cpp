#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gest_emp_auth.h"
#include "employe.h"
#include <QMessageBox>
#include "authentification.h"
#include "menu.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("VineWood");
    setWindowIcon(QIcon(":/logoApp.png"));
    ui->lineEdit_loginid->setValidator(new QIntValidator(0,99999999, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_quiter1_clicked()
{
    close();
}

void MainWindow::on_pushButton_connecter_clicked()
{
    authentification A2;
    A2.setid(ui->lineEdit_loginid->text().toInt());
    A2.setmdp(ui->lineEdit_loginmdp->text());
    if(A2.recherche_id_mdp(A2.getid(),A2.getmdp())){
    M = new Menu(this);
    M->show();
}
}

void MainWindow::on_pushButton_inscrire_clicked()
{
    G = new gest_emp_auth(this);
    G->show();
}

void MainWindow::on_pushButton_mdpoublie_clicked()
{
    authentification A2;
    A2.setid(ui->lineEdit_loginid->text().toInt());
    if(A2.recherche_id(A2.getid())){
    G = new gest_emp_auth(this);
    G->show();
    }
}
