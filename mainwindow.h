#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include "employe.h"
#include <QMessageBox>
#include "authentification.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMainWindow>
#include "gest_emp_auth.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:



    void on_pushButton_quiter1_clicked();


    void on_pushButton_connecter_clicked();

    void on_pushButton_inscrire_clicked();

    void on_pushButton_mdpoublie_clicked();

private:
    Ui::MainWindow *ui;
    Employe E;
    gest_emp_auth *G;
};
#endif // MAINWINDOW_H
