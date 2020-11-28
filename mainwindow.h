#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employe.h"
#include <QMainWindow>

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
    void on_pushButton_ajouteremploye_clicked();

    void on_pushButton_supremploye_clicked();

    void on_pushButton_ajoutprofil_clicked();

    void on_pushButton_spradmin_clicked();

    void on_pushButton_tricin_clicked();

    void on_pushButton_rechercheremp_clicked();

private:
    Ui::MainWindow *ui;
    Employe E;
};
#endif // MAINWINDOW_H
