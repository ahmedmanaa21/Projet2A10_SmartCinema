#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H
#include <QWidget>
#include "client.h"
#include <QMessageBox>
#include "abonnement.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow: public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ajouterclient_clicked();

    void on_pushButton_suprclient_clicked();

    void on_pushButton_tricin_clicked();

    void on_pushButton_recherchercli_clicked();

    void on_pushButton_ajoutabon_clicked();
     void on_pushButton_suprabon_clicked();


    void on_pushButton_modifierclient_clicked();

    void on_pushButton_modifierabonnement_clicked();
    void on_trinomabonnement_clicked();



private:
    Ui::MainWindow *ui;
    Client C;
};

#endif // MAINWINDOW1_H
