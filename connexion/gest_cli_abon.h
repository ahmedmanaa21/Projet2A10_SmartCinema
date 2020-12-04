#ifndef GEST_EMP_AUTH_H
#define GEST_EMP_AUTH_H
#include <QWidget>
#include "client.h"
#include <QMessageBox>
#include "abonnement.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMainWindow>

namespace Ui {
class gest_cli_abon ;
}

class gest_cli_abon : public QWidget
{
    Q_OBJECT

public:
    explicit gest_cli_abon(QWidget *parent = nullptr);
    ~gest_cli_abon();

private slots:
    void on_pushButton_ajoutercliclicked();

    void on_pushButton_suprcli_clicked();

    void on_pushButton_tricin_clicked();

    void on_pushButton_recherchercli_clicked();

    void on_pushButton_ajoutabon_clicked();

    void on_pushButton_spradmin_clicked();

    void on_pushButton_trinom_clicked();

    //void on_pushButton_trisalaire_clicked();

    //void on_trinomprofil_clicked();

    void on_triidprofil_clicked();

    void on_pushButton_modifieremploye_clicked();

    void on_pushButton_modifierprofil_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_imprimer_clicked();

    void on_pushButton_pdf_clicked();

    void on_pushButton_imprimerprofil_clicked();

    void on_pushButton_pdfprofil_clicked();

    void on_pushButton_rechprofil_clicked();

public:
    Ui::gest_cli_abon *ui;
    Client C;
};

#endif // GEST_EMP_AUTH_H
