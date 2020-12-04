#include "mainwindow.h"
#include "ui_gest_emp_auth.h"
#include "client.h"
#include <QMessageBox>
#include "abonnement.h"
//#include "mainwindow.h"
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
#include<QMainWindow>
#include<mainwindow.ui
MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
 ui->setupUi(this);

}

