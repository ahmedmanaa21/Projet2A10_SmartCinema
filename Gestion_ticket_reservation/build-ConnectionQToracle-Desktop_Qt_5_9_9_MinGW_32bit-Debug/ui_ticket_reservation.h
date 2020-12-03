/********************************************************************************
** Form generated from reading UI file 'ticket_reservation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_RESERVATION_H
#define UI_TICKET_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket_Reservation
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab_8;
    QTabWidget *WidgetR;
    QWidget *AjoutR;
    QPushButton *AjoutTicket;
    QLineEdit *ref_input;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *prix_input;
    QLabel *label_11;
    QLineEdit *nom_input;
    QPushButton *EditTicket;
    QWidget *RechercheR;
    QLineEdit *Idf_find;
    QPushButton *TriR_Idf_3;
    QComboBox *cCritere;
    QWidget *SuppressionR;
    QPushButton *RemoveTicket;
    QLabel *label_35;
    QLineEdit *ref_remove;
    QTableView *TabR1;
    QGroupBox *groupBox_11;
    QPushButton *TriR_Idr;
    QPushButton *TriR_Idf;
    QPushButton *TriR_Idc;
    QPushButton *Imprimer;
    QPushButton *PDF;
    QWidget *tab_10;
    QTabWidget *WidgetF;
    QWidget *AjoutF;
    QPushButton *AjoutReservation;
    QLineEdit *nombre_input;
    QLabel *label_14;
    QLabel *label_12;
    QPushButton *EditF_button;
    QLabel *label_15;
    QLineEdit *date_input;
    QLineEdit *refr_input;
    QWidget *RechercheF;
    QLineEdit *rechercheInput;
    QPushButton *bRechReservation;
    QComboBox *cCritereRes;
    QWidget *SuppressionF;
    QPushButton *RemoveReservation;
    QLineEdit *Idf_remove;
    QLabel *label_27;
    QPushButton *ResetF_button;
    QGroupBox *groupBox_13;
    QPushButton *TriF_Id;
    QPushButton *TriF_Nom;
    QPushButton *TriF_Prenom;
    QTableView *TabF1;
    QPushButton *PDFRes;
    QPushButton *impRes;

    void setupUi(QDialog *Ticket_Reservation)
    {
        if (Ticket_Reservation->objectName().isEmpty())
            Ticket_Reservation->setObjectName(QStringLiteral("Ticket_Reservation"));
        Ticket_Reservation->resize(1040, 626);
        tabWidget_2 = new QTabWidget(Ticket_Reservation);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setEnabled(true);
        tabWidget_2->setGeometry(QRect(0, 20, 1021, 469));
        tabWidget_2->setMouseTracking(false);
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        WidgetR = new QTabWidget(tab_8);
        WidgetR->setObjectName(QStringLiteral("WidgetR"));
        WidgetR->setEnabled(true);
        WidgetR->setGeometry(QRect(0, 20, 381, 271));
        AjoutR = new QWidget();
        AjoutR->setObjectName(QStringLiteral("AjoutR"));
        AjoutTicket = new QPushButton(AjoutR);
        AjoutTicket->setObjectName(QStringLiteral("AjoutTicket"));
        AjoutTicket->setGeometry(QRect(110, 190, 75, 23));
        ref_input = new QLineEdit(AjoutR);
        ref_input->setObjectName(QStringLiteral("ref_input"));
        ref_input->setGeometry(QRect(150, 20, 101, 16));
        label_4 = new QLabel(AjoutR);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 71, 20));
        label_8 = new QLabel(AjoutR);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 20, 111, 20));
        prix_input = new QLineEdit(AjoutR);
        prix_input->setObjectName(QStringLiteral("prix_input"));
        prix_input->setGeometry(QRect(150, 50, 101, 16));
        label_11 = new QLabel(AjoutR);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 50, 71, 20));
        nom_input = new QLineEdit(AjoutR);
        nom_input->setObjectName(QStringLiteral("nom_input"));
        nom_input->setGeometry(QRect(150, 80, 101, 16));
        EditTicket = new QPushButton(AjoutR);
        EditTicket->setObjectName(QStringLiteral("EditTicket"));
        EditTicket->setEnabled(true);
        EditTicket->setGeometry(QRect(200, 190, 75, 23));
        WidgetR->addTab(AjoutR, QString());
        RechercheR = new QWidget();
        RechercheR->setObjectName(QStringLiteral("RechercheR"));
        Idf_find = new QLineEdit(RechercheR);
        Idf_find->setObjectName(QStringLiteral("Idf_find"));
        Idf_find->setGeometry(QRect(150, 60, 101, 20));
        TriR_Idf_3 = new QPushButton(RechercheR);
        TriR_Idf_3->setObjectName(QStringLiteral("TriR_Idf_3"));
        TriR_Idf_3->setGeometry(QRect(170, 110, 81, 23));
        cCritere = new QComboBox(RechercheR);
        cCritere->setObjectName(QStringLiteral("cCritere"));
        cCritere->setGeometry(QRect(280, 60, 73, 22));
        WidgetR->addTab(RechercheR, QString());
        SuppressionR = new QWidget();
        SuppressionR->setObjectName(QStringLiteral("SuppressionR"));
        RemoveTicket = new QPushButton(SuppressionR);
        RemoveTicket->setObjectName(QStringLiteral("RemoveTicket"));
        RemoveTicket->setGeometry(QRect(140, 120, 75, 23));
        label_35 = new QLabel(SuppressionR);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(16, 70, 141, 41));
        ref_remove = new QLineEdit(SuppressionR);
        ref_remove->setObjectName(QStringLiteral("ref_remove"));
        ref_remove->setGeometry(QRect(140, 80, 71, 20));
        WidgetR->addTab(SuppressionR, QString());
        TabR1 = new QTableView(tab_8);
        TabR1->setObjectName(QStringLiteral("TabR1"));
        TabR1->setGeometry(QRect(470, 10, 517, 321));
        groupBox_11 = new QGroupBox(tab_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(30, 290, 141, 151));
        TriR_Idr = new QPushButton(groupBox_11);
        TriR_Idr->setObjectName(QStringLiteral("TriR_Idr"));
        TriR_Idr->setGeometry(QRect(10, 20, 111, 23));
        TriR_Idf = new QPushButton(groupBox_11);
        TriR_Idf->setObjectName(QStringLiteral("TriR_Idf"));
        TriR_Idf->setGeometry(QRect(10, 60, 81, 23));
        TriR_Idc = new QPushButton(groupBox_11);
        TriR_Idc->setObjectName(QStringLiteral("TriR_Idc"));
        TriR_Idc->setGeometry(QRect(10, 100, 81, 23));
        Imprimer = new QPushButton(tab_8);
        Imprimer->setObjectName(QStringLiteral("Imprimer"));
        Imprimer->setEnabled(true);
        Imprimer->setGeometry(QRect(300, 372, 91, 41));
        PDF = new QPushButton(tab_8);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setEnabled(true);
        PDF->setGeometry(QRect(300, 310, 91, 41));
        tabWidget_2->addTab(tab_8, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        WidgetF = new QTabWidget(tab_10);
        WidgetF->setObjectName(QStringLiteral("WidgetF"));
        WidgetF->setGeometry(QRect(20, 20, 381, 271));
        AjoutF = new QWidget();
        AjoutF->setObjectName(QStringLiteral("AjoutF"));
        AjoutReservation = new QPushButton(AjoutF);
        AjoutReservation->setObjectName(QStringLiteral("AjoutReservation"));
        AjoutReservation->setGeometry(QRect(110, 190, 75, 23));
        AjoutReservation->setStyleSheet(QStringLiteral(""));
        nombre_input = new QLineEdit(AjoutF);
        nombre_input->setObjectName(QStringLiteral("nombre_input"));
        nombre_input->setGeometry(QRect(150, 50, 101, 16));
        label_14 = new QLabel(AjoutF);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 50, 81, 20));
        label_12 = new QLabel(AjoutF);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 20, 111, 20));
        EditF_button = new QPushButton(AjoutF);
        EditF_button->setObjectName(QStringLiteral("EditF_button"));
        EditF_button->setEnabled(false);
        EditF_button->setGeometry(QRect(200, 190, 75, 23));
        label_15 = new QLabel(AjoutF);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 80, 61, 20));
        date_input = new QLineEdit(AjoutF);
        date_input->setObjectName(QStringLiteral("date_input"));
        date_input->setGeometry(QRect(150, 80, 101, 16));
        refr_input = new QLineEdit(AjoutF);
        refr_input->setObjectName(QStringLiteral("refr_input"));
        refr_input->setGeometry(QRect(150, 20, 101, 16));
        WidgetF->addTab(AjoutF, QString());
        RechercheF = new QWidget();
        RechercheF->setObjectName(QStringLiteral("RechercheF"));
        rechercheInput = new QLineEdit(RechercheF);
        rechercheInput->setObjectName(QStringLiteral("rechercheInput"));
        rechercheInput->setGeometry(QRect(150, 60, 121, 20));
        bRechReservation = new QPushButton(RechercheF);
        bRechReservation->setObjectName(QStringLiteral("bRechReservation"));
        bRechReservation->setGeometry(QRect(190, 100, 81, 23));
        cCritereRes = new QComboBox(RechercheF);
        cCritereRes->setObjectName(QStringLiteral("cCritereRes"));
        cCritereRes->setGeometry(QRect(290, 60, 73, 22));
        WidgetF->addTab(RechercheF, QString());
        SuppressionF = new QWidget();
        SuppressionF->setObjectName(QStringLiteral("SuppressionF"));
        RemoveReservation = new QPushButton(SuppressionF);
        RemoveReservation->setObjectName(QStringLiteral("RemoveReservation"));
        RemoveReservation->setGeometry(QRect(140, 120, 75, 23));
        Idf_remove = new QLineEdit(SuppressionF);
        Idf_remove->setObjectName(QStringLiteral("Idf_remove"));
        Idf_remove->setGeometry(QRect(140, 80, 71, 20));
        label_27 = new QLabel(SuppressionF);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(6, 70, 151, 41));
        WidgetF->addTab(SuppressionF, QString());
        ResetF_button = new QPushButton(tab_10);
        ResetF_button->setObjectName(QStringLiteral("ResetF_button"));
        ResetF_button->setGeometry(QRect(850, 410, 81, 23));
        groupBox_13 = new QGroupBox(tab_10);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(30, 290, 111, 151));
        TriF_Id = new QPushButton(groupBox_13);
        TriF_Id->setObjectName(QStringLiteral("TriF_Id"));
        TriF_Id->setGeometry(QRect(10, 20, 91, 23));
        TriF_Nom = new QPushButton(groupBox_13);
        TriF_Nom->setObjectName(QStringLiteral("TriF_Nom"));
        TriF_Nom->setGeometry(QRect(10, 60, 75, 23));
        TriF_Prenom = new QPushButton(groupBox_13);
        TriF_Prenom->setObjectName(QStringLiteral("TriF_Prenom"));
        TriF_Prenom->setGeometry(QRect(10, 100, 71, 23));
        TabF1 = new QTableView(tab_10);
        TabF1->setObjectName(QStringLiteral("TabF1"));
        TabF1->setGeometry(QRect(470, 10, 517, 321));
        PDFRes = new QPushButton(tab_10);
        PDFRes->setObjectName(QStringLiteral("PDFRes"));
        PDFRes->setEnabled(true);
        PDFRes->setGeometry(QRect(280, 308, 91, 41));
        impRes = new QPushButton(tab_10);
        impRes->setObjectName(QStringLiteral("impRes"));
        impRes->setEnabled(true);
        impRes->setGeometry(QRect(280, 370, 91, 41));
        tabWidget_2->addTab(tab_10, QString());

        retranslateUi(Ticket_Reservation);

        tabWidget_2->setCurrentIndex(1);
        WidgetR->setCurrentIndex(2);
        WidgetF->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Ticket_Reservation);
    } // setupUi

    void retranslateUi(QDialog *Ticket_Reservation)
    {
        Ticket_Reservation->setWindowTitle(QApplication::translate("Ticket_Reservation", "Dialog", Q_NULLPTR));
        AjoutTicket->setText(QApplication::translate("Ticket_Reservation", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("Ticket_Reservation", "Nom du film", Q_NULLPTR));
        label_8->setText(QApplication::translate("Ticket_Reservation", "Reference Ticket", Q_NULLPTR));
        label_11->setText(QApplication::translate("Ticket_Reservation", "Prix Ticket", Q_NULLPTR));
        EditTicket->setText(QApplication::translate("Ticket_Reservation", "Modifier", Q_NULLPTR));
        WidgetR->setTabText(WidgetR->indexOf(AjoutR), QApplication::translate("Ticket_Reservation", "Ajout et Modification", Q_NULLPTR));
        Idf_find->setPlaceholderText(QString());
        TriR_Idf_3->setText(QApplication::translate("Ticket_Reservation", "Rechercher", Q_NULLPTR));
        cCritere->clear();
        cCritere->insertItems(0, QStringList()
         << QApplication::translate("Ticket_Reservation", "REFERENCE", Q_NULLPTR)
         << QApplication::translate("Ticket_Reservation", "PRIX", Q_NULLPTR)
         << QApplication::translate("Ticket_Reservation", "NOM", Q_NULLPTR)
        );
        WidgetR->setTabText(WidgetR->indexOf(RechercheR), QApplication::translate("Ticket_Reservation", "Recherche", Q_NULLPTR));
        RemoveTicket->setText(QApplication::translate("Ticket_Reservation", "Supprimer", Q_NULLPTR));
        label_35->setText(QApplication::translate("Ticket_Reservation", "Reference Ticket", Q_NULLPTR));
        WidgetR->setTabText(WidgetR->indexOf(SuppressionR), QApplication::translate("Ticket_Reservation", "Suppression", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("Ticket_Reservation", "Tri ", Q_NULLPTR));
        TriR_Idr->setText(QApplication::translate("Ticket_Reservation", "Reference Ticket", Q_NULLPTR));
        TriR_Idf->setText(QApplication::translate("Ticket_Reservation", "Prix Ticket", Q_NULLPTR));
        TriR_Idc->setText(QApplication::translate("Ticket_Reservation", "Nom Film", Q_NULLPTR));
        Imprimer->setText(QApplication::translate("Ticket_Reservation", "Imprimer", Q_NULLPTR));
        PDF->setText(QApplication::translate("Ticket_Reservation", "PDF", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("Ticket_Reservation", "Tickets", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        WidgetF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        WidgetF->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        AjoutReservation->setText(QApplication::translate("Ticket_Reservation", "Ajouter", Q_NULLPTR));
        label_14->setText(QApplication::translate("Ticket_Reservation", "Nombre", Q_NULLPTR));
        label_12->setText(QApplication::translate("Ticket_Reservation", "Reference res", Q_NULLPTR));
        EditF_button->setText(QApplication::translate("Ticket_Reservation", "Modifier", Q_NULLPTR));
        label_15->setText(QApplication::translate("Ticket_Reservation", "Date", Q_NULLPTR));
        WidgetF->setTabText(WidgetF->indexOf(AjoutF), QApplication::translate("Ticket_Reservation", "Ajout et Modification", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rechercheInput->setToolTip(QApplication::translate("Ticket_Reservation", "fefef", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rechercheInput->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        rechercheInput->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        rechercheInput->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        rechercheInput->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        rechercheInput->setInputMask(QString());
        rechercheInput->setPlaceholderText(QString());
        bRechReservation->setText(QApplication::translate("Ticket_Reservation", "Rechercher", Q_NULLPTR));
        cCritereRes->clear();
        cCritereRes->insertItems(0, QStringList()
         << QApplication::translate("Ticket_Reservation", "REFERENCE", Q_NULLPTR)
         << QApplication::translate("Ticket_Reservation", "NOMBRE", Q_NULLPTR)
         << QApplication::translate("Ticket_Reservation", "DATES", Q_NULLPTR)
        );
        WidgetF->setTabText(WidgetF->indexOf(RechercheF), QApplication::translate("Ticket_Reservation", "Recherche", Q_NULLPTR));
        RemoveReservation->setText(QApplication::translate("Ticket_Reservation", "Supprimer", Q_NULLPTR));
        label_27->setText(QApplication::translate("Ticket_Reservation", "Reference Reservation", Q_NULLPTR));
        WidgetF->setTabText(WidgetF->indexOf(SuppressionF), QApplication::translate("Ticket_Reservation", "Suppression", Q_NULLPTR));
        ResetF_button->setText(QApplication::translate("Ticket_Reservation", "Reset", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("Ticket_Reservation", "Tri par", Q_NULLPTR));
        TriF_Id->setText(QApplication::translate("Ticket_Reservation", "Reference RES", Q_NULLPTR));
        TriF_Nom->setText(QApplication::translate("Ticket_Reservation", "Nombre", Q_NULLPTR));
        TriF_Prenom->setText(QApplication::translate("Ticket_Reservation", "Date", Q_NULLPTR));
        PDFRes->setText(QApplication::translate("Ticket_Reservation", "PDF", Q_NULLPTR));
        impRes->setText(QApplication::translate("Ticket_Reservation", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("Ticket_Reservation", "Reservations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ticket_Reservation: public Ui_Ticket_Reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_RESERVATION_H
