#include "ticket_reservation.h"
#include "ui_ticket_reservation.h"
#include "ticket.h"
#include "reservation.h"
#include <QMessageBox>
#include <iostream>
#include <QDebug>
#include <QRadioButton>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include <QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QSqlQuery>
#include<QDesktopServices>
#include <QMessageBox>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
#include <QtPrintSupport\qprinter.h>
#include <QPrintDialog>
#include<QtSql/QSqlQuery>
#include<QVariant>


Ticket_Reservation::Ticket_Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ticket_Reservation)
{
    Ticket T;
    Reservation R;
    ui->setupUi(this);
    ui->TabR1->setModel(T.afficher());
    ui->TabF1->setModel(R.afficher());
}

Ticket_Reservation::~Ticket_Reservation()
{
    delete ui;
}


void Ticket_Reservation::on_RemoveTicket_clicked()
{
        Ticket T; T.setRef(ui->ref_remove->text());
        bool test=T.supprimer(T.getRef());
        QMessageBox msgBox;
        if(test)
        {
            msgBox.setText("Suppression avec succes.");
            ui->ref_remove->setText("");
            ui->TabR1->setModel(T.afficher());
        }
        else
        {
            msgBox.setText("Echec de suppression");}
            msgBox.exec();
}

void Ticket_Reservation::on_RemoveReservation_clicked()
{
        Reservation R; R.setRef(ui->Idf_remove->text());
        bool test=R.supprimer(R.getRef());
        QMessageBox msgBox;
        if(test)
        {
            msgBox.setText("Suppression avec succes.");
            ui->Idf_remove->setText("");
            ui->TabF1->setModel(R.afficher());
        }
        else
        {
            msgBox.setText("Echec de suppression");}
            msgBox.exec();
}


void Ticket_Reservation::on_AjoutTicket_clicked()
{
       QString ref=ui->ref_input->text();
       QString prix=ui->prix_input->text();
       QString nom=ui->nom_input->text();
    Ticket T(ref,prix,nom);
    bool test=T.ajouter();
    QMessageBox msgBox;

    if(test)
    {  msgBox.setText("Ajout avec succes.");
        ui->TabR1->setModel(T.afficher());
    }
    else {
        msgBox.setText("Echec d'ajout");}
        msgBox.exec();
}
void Ticket_Reservation::on_EditTicket_clicked()
{
    QString ref=ui->ref_input->text();
    QString prix=ui->prix_input->text();
    QString nom=ui->nom_input->text();
       Ticket T(ref,prix,nom);
        bool test = T.modifier(ref);
        QMessageBox msgBox;

        if(test)
        {
            msgBox.setText("Modification avec succes.");
            ui->TabR1->setModel(T.afficher());
        }
        else
        {
            msgBox.setText("Echec de modification");
        }
        msgBox.exec();
}

void Ticket_Reservation::on_tabWidget_2_tabBarClicked(int index)
{
    ui->TabR1->setModel(T.afficher());
}

void Ticket_Reservation::on_AjoutReservation_clicked()

    {
           QString ref=ui->refr_input->text();
           QString nombre=ui->nombre_input->text();
           QString date=ui->date_input->text();
        Reservation R(ref,nombre,date);
        bool test=R.ajouter();
        QMessageBox msgBox;

        if(test)
        {  msgBox.setText("Ajout avec succes.");
            ui->TabF1->setModel(R.afficher());
        }
        else {
            msgBox.setText("Echec d'ajout");}
            msgBox.exec();
    }




void Ticket_Reservation::on_PDF_clicked()
{
    QString strStream;
      QTextStream out(&strStream);

                 const int rowCount = ui->TabR1->model()->rowCount();
                 const int columnCount = ui->TabR1->model()->columnCount();

                 out <<  "<html>\n"
                       "<head>\n"
                        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("strTitle")
                      <<  "</head>\n"
                        "<body bgcolor=#ffffff link=#5000A0>\n"

                      //     "<align='right'> " << datefich << "</align>"
                          "<center> <H1>Liste des tickets </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                      // headers
                         out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                    for (int column = 0; column < columnCount; column++)
                           if (!ui->TabR1->isColumnHidden(column))
                         out << QString("<th>%1</th>").arg(ui->TabR1->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                         for (int row = 0; row < rowCount; row++) {
                           out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                             for (int column = 0; column < columnCount; column++) {
                             if (!ui->TabR1->isColumnHidden(column)) {
                            QString data = ui->TabR1->model()->data(ui->TabR1->model()->index(row, column)).toString().simplified();
                                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                     }
                                 }
                                 out << "</tr>\n";
                              }
                             out <<  "</table> </center>\n"
                                  "</body>\n"
                                "</html>\n";

                        QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                          if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                         QPrinter printer (QPrinter::PrinterResolution);
                          printer.setOutputFormat(QPrinter::PdfFormat);
                         printer.setPaperSize(QPrinter::A4);
                        printer.setOutputFileName(fileName);

                         QTextDocument doc;
                          doc.setHtml(strStream);
                          doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                          doc.print(&printer);

}



void Ticket_Reservation::on_Imprimer_clicked()
{
    QPrinter printer;

              printer.setPrinterName("desiered printer name");

            QPrintDialog dialog(&printer,this);

              if(dialog.exec()== QDialog::Rejected)

                  return;

}


void Ticket_Reservation::on_TriR_Idf_3_clicked()
{
    Ticket T;

        if(T.rechercheTicketMulti(ui->cCritere->currentText(),ui->Idf_find->text()))
        {
        ui->TabR1->setModel(T.AfficherTicketMulti(ui->cCritere->currentText(),ui->Idf_find->text()));
        }
        else
        {
            ui->TabR1->setModel(T.afficher());
        }
}

void Ticket_Reservation::on_bRechReservation_clicked()
{
    Reservation R;

        if(R.rechercheReservationMulti(ui->cCritereRes->currentText(),ui->rechercheInput->text()))
        {
        ui->TabF1->setModel(R.AfficherReservationMulti(ui->cCritereRes->currentText(),ui->rechercheInput->text()));
        }
        else
        {
            ui->TabF1->setModel(R.afficher());
        }
}

void Ticket_Reservation::on_TriR_Idr_clicked()
{
    ui->TabR1->setModel(T.afficherTicketsTri("REFERENCE"));
}

void Ticket_Reservation::on_TriR_Idf_clicked()
{
    ui->TabR1->setModel(T.afficherTicketsTri("PRIX"));
}

void Ticket_Reservation::on_TriR_Idc_clicked()
{
    ui->TabR1->setModel(T.afficherTicketsTri("NOM"));
}

void Ticket_Reservation::on_TriF_Id_clicked()
{
    ui->TabF1->setModel(R.afficherReservationTri("REFERENCE"));
}

void Ticket_Reservation::on_TriF_Nom_clicked()
{
    ui->TabF1->setModel(R.afficherReservationTri("NOMBRE"));
}

void Ticket_Reservation::on_TriF_Prenom_clicked()
{
    ui->TabF1->setModel(R.afficherReservationTri("DATES"));
}

void Ticket_Reservation::on_PDFRes_clicked()
{
    QString strStream;
      QTextStream out(&strStream);

                 const int rowCount = ui->TabF1->model()->rowCount();
                 const int columnCount = ui->TabF1->model()->columnCount();

                 out <<  "<html>\n"
                       "<head>\n"
                        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("strTitle")
                      <<  "</head>\n"
                        "<body bgcolor=#ffffff link=#5000A0>\n"

                      //     "<align='right'> " << datefich << "</align>"
                          "<center> <H1>Liste des Reservations </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                      // headers
                         out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                    for (int column = 0; column < columnCount; column++)
                           if (!ui->TabF1->isColumnHidden(column))
                         out << QString("<th>%1</th>").arg(ui->TabF1->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                         for (int row = 0; row < rowCount; row++) {
                           out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                             for (int column = 0; column < columnCount; column++) {
                             if (!ui->TabF1->isColumnHidden(column)) {
                            QString data = ui->TabF1->model()->data(ui->TabF1->model()->index(row, column)).toString().simplified();
                                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                     }
                                 }
                                 out << "</tr>\n";
                              }
                             out <<  "</table> </center>\n"
                                  "</body>\n"
                                "</html>\n";

                        QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                          if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                         QPrinter printer (QPrinter::PrinterResolution);
                          printer.setOutputFormat(QPrinter::PdfFormat);
                         printer.setPaperSize(QPrinter::A4);
                        printer.setOutputFileName(fileName);

                         QTextDocument doc;
                          doc.setHtml(strStream);
                          doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                          doc.print(&printer);
}

void Ticket_Reservation::on_impRes_clicked()
{

}
