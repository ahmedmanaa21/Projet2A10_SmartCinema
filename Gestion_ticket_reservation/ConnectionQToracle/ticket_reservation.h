#ifndef TICKET_RESERVATION_H
#define TICKET_RESERVATION_H

#include <QDialog>
#include "ticket.h"
#include "reservation.h"
namespace Ui {
class Ticket_Reservation;
}

class Ticket_Reservation : public QDialog
{
    Q_OBJECT

public:
    explicit Ticket_Reservation(QWidget *parent = nullptr);
    ~Ticket_Reservation();

private slots:
    void on_AjoutTicket_clicked();

    void on_RemoveTicket_clicked();

    void on_RemoveReservation_clicked();

    void on_EditTicket_clicked();

    void on_tabWidget_2_tabBarClicked(int index);

    void on_AjoutReservation_clicked();


    void on_PDF_clicked();

    void on_Imprimer_clicked();



    void on_TriR_Idf_3_clicked();

    void on_bRechReservation_clicked();

    void on_TriR_Idr_clicked();

    void on_TriR_Idf_clicked();

    void on_TriR_Idc_clicked();

    void on_TriF_Id_clicked();

    void on_TriF_Nom_clicked();

    void on_TriF_Prenom_clicked();

    void on_PDFRes_clicked();

    void on_impRes_clicked();

private:

    Ui::Ticket_Reservation *ui;
    Ticket T;
    Reservation R;
};

#endif // TICKET_RESERVATION_H
