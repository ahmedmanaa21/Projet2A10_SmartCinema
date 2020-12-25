#include "menu.h"
#include "ui_menu.h"
#include "gest_emp_auth.h"
#include <QMessageBox>


Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    setWindowTitle("VineWood");
    setWindowIcon(QIcon(":/logoApp.png"));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_quitermenu_clicked()
{
    close();
}


void Menu::on_pushButton_clicked()
{
    G = new gest_emp_auth(this);
    G->show();
}

