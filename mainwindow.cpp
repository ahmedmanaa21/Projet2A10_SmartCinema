#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gest_emp_auth.h"
#include "ui_gest_emp_auth.h"
#include "employe.h"
#include <QMessageBox>
#include "authentification.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("VineWood");
    setWindowIcon(QIcon(":/logoApp.png"));
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
    G = new gest_emp_auth(this);
    G->show();
}

void MainWindow::on_pushButton_inscrire_clicked()
{
    G = new gest_emp_auth(this);
    G->show();
}

void MainWindow::on_pushButton_mdpoublie_clicked()
{
    G = new gest_emp_auth(this);
    G->show();
}
