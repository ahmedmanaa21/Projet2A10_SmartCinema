#ifndef GEST_EMP_AUTH_H
#define GEST_EMP_AUTH_H
#include <QWidget>
#include "employe.h"
#include <QMessageBox>
#include "authentification.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMainWindow>

namespace Ui {
class gest_emp_auth;
}

class gest_emp_auth : public QWidget
{
    Q_OBJECT

public:
    explicit gest_emp_auth(QWidget *parent = nullptr);
    ~gest_emp_auth();

private slots:
    void on_pushButton_ajouteremploye_clicked();

    void on_pushButton_supremploye_clicked();

    void on_pushButton_tricin_clicked();

    void on_pushButton_rechercheremp_clicked();

    void on_pushButton_ajoutprofil_clicked();

    void on_pushButton_spradmin_clicked();

    void on_pushButton_trinom_clicked();

    void on_pushButton_trisalaire_clicked();

    void on_trinomprofil_clicked();

    void on_triidprofil_clicked();

    void on_pushButton_modifieremploye_clicked();

    void on_pushButton_modifierprofil_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_imprimer_clicked();

    void on_pushButton_pdf_clicked();

    void on_pushButton_imprimerprofil_clicked();

    void on_pushButton_pdfprofil_clicked();

    void on_pushButton_rechprofil_clicked();

    void on_recherchercin_clicked();

    void on_rechercherid_clicked();

private:
    Ui::gest_emp_auth *ui;
    Employe E;
};

#endif // GEST_EMP_AUTH_H
