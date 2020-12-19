/********************************************************************************
** Form generated from reading UI file 'gest_emp_auth.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEST_EMP_AUTH_H
#define UI_GEST_EMP_AUTH_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gest_emp_auth
{
public:
    QTabWidget *tabWidget;
    QWidget *Tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGroupBox *ajouter_emp;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_cin;
    QLineEdit *lineEdit_numero;
    QPushButton *pushButton_ajouteremploye;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit_email;
    QLabel *label_16;
    QLineEdit *lineEdit_salaire;
    QDateEdit *dateEdit;
    QWidget *tab_4;
    QGroupBox *modifier_emp;
    QGroupBox *ajouter_emp_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_mnom;
    QLineEdit *lineEdit_mprenom;
    QLineEdit *lineEdit_mnumero;
    QLabel *label_22;
    QLineEdit *lineEdit_memail;
    QLabel *label_23;
    QLineEdit *lineEdit_msalaire;
    QPushButton *pushButton_quitter_2;
    QPushButton *pushButton_modifieremploye;
    QLabel *label_7;
    QLineEdit *lineEdit_cinm;
    QPushButton *recherchercin;
    QDateEdit *dateEdit_m;
    QWidget *tab_5;
    QGroupBox *groupBox;
    QTableView *tab_employe;
    QPushButton *pushButton_trinom;
    QPushButton *pushButton_trisalaire;
    QPushButton *pushButton_tricin;
    QComboBox *comboBox;
    QLineEdit *lineEdit_emprech;
    QPushButton *pushButton_rechercheremp;
    QPushButton *pushButton_imprimer;
    QPushButton *pushButton_pdf;
    QPushButton *pushButton_quitter_3;
    QWidget *tab_6;
    QGroupBox *supprimer_emp;
    QLabel *label_8;
    QLineEdit *lineEdit_supcin;
    QPushButton *pushButton_supremploye;
    QPushButton *pushButton_quitter_4;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QGroupBox *ajout_auth;
    QLineEdit *lineEditnometprenom;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *lineEdit_mdp;
    QPushButton *pushButton_ajoutprofil;
    QPushButton *pushButton_quitter;
    QLabel *label_13;
    QLineEdit *lineEdit_id;
    QWidget *tab_9;
    QGroupBox *modifier_auth;
    QGroupBox *ajout_auth_2;
    QLineEdit *mnom;
    QLabel *label_34;
    QLabel *label_36;
    QLineEdit *lineEdit_mmdp;
    QPushButton *pushButton_modifierprofil;
    QPushButton *pushButton_5;
    QLabel *label_14;
    QLineEdit *lineEdit_mid;
    QPushButton *rechercherid;
    QWidget *tab_8;
    QGroupBox *groupBox_2;
    QPushButton *trinomprofil;
    QPushButton *triidprofil;
    QPushButton *pushButton_imprimerprofil;
    QPushButton *pushButton_pdfprofil;
    QPushButton *pushButton;
    QPushButton *pushButton_rechprofil;
    QLineEdit *lineEdit_profilrech;
    QComboBox *comboBox_2;
    QTableView *tableView_profil;
    QWidget *tab_10;
    QGroupBox *supprimer_auth;
    QLabel *label_15;
    QLineEdit *lineEdit_scin_admin;
    QPushButton *pushButton_spradmin;
    QPushButton *pushButton_retouradmin;

    void setupUi(QWidget *gest_emp_auth)
    {
        if (gest_emp_auth->objectName().isEmpty())
            gest_emp_auth->setObjectName(QStringLiteral("gest_emp_auth"));
        gest_emp_auth->resize(721, 363);
        gest_emp_auth->setStyleSheet(QStringLiteral("background-image: url(:/background.jpg);"));
        tabWidget = new QTabWidget(gest_emp_auth);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 721, 371));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(181, 197, 255);\n"
"background-image: url(:/backgroundapp.jpg);"));
        Tab = new QWidget();
        Tab->setObjectName(QStringLiteral("Tab"));
        tabWidget_2 = new QTabWidget(Tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 721, 361));
        tabWidget_2->setStyleSheet(QLatin1String("background-color: rgb(181, 197, 255);\n"
""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        ajouter_emp = new QGroupBox(tab_3);
        ajouter_emp->setObjectName(QStringLiteral("ajouter_emp"));
        ajouter_emp->setGeometry(QRect(0, 0, 731, 321));
        ajouter_emp->setStyleSheet(QStringLiteral(""));
        label = new QLabel(ajouter_emp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 47, 13));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(ajouter_emp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 47, 13));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(ajouter_emp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 47, 13));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(ajouter_emp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 140, 101, 16));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(ajouter_emp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 170, 91, 16));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_nom = new QLineEdit(ajouter_emp);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(130, 40, 113, 20));
        lineEdit_nom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_prenom = new QLineEdit(ajouter_emp);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(130, 70, 113, 20));
        lineEdit_prenom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_cin = new QLineEdit(ajouter_emp);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(130, 110, 113, 20));
        lineEdit_cin->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_cin->setMaxLength(8);
        lineEdit_numero = new QLineEdit(ajouter_emp);
        lineEdit_numero->setObjectName(QStringLiteral("lineEdit_numero"));
        lineEdit_numero->setGeometry(QRect(130, 170, 113, 20));
        lineEdit_numero->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_numero->setMaxLength(8);
        pushButton_ajouteremploye = new QPushButton(ajouter_emp);
        pushButton_ajouteremploye->setObjectName(QStringLiteral("pushButton_ajouteremploye"));
        pushButton_ajouteremploye->setGeometry(QRect(350, 130, 75, 23));
        pushButton_ajouteremploye->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(ajouter_emp);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 160, 75, 23));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        label_6 = new QLabel(ajouter_emp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 40, 47, 13));
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_email = new QLineEdit(ajouter_emp);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(300, 40, 211, 20));
        lineEdit_email->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(ajouter_emp);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(250, 80, 47, 13));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_salaire = new QLineEdit(ajouter_emp);
        lineEdit_salaire->setObjectName(QStringLiteral("lineEdit_salaire"));
        lineEdit_salaire->setGeometry(QRect(300, 80, 113, 20));
        lineEdit_salaire->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        dateEdit = new QDateEdit(ajouter_emp);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(130, 140, 110, 22));
        dateEdit->setMaximumDateTime(QDateTime(QDate(2020, 12, 31), QTime(23, 59, 59)));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        modifier_emp = new QGroupBox(tab_4);
        modifier_emp->setObjectName(QStringLiteral("modifier_emp"));
        modifier_emp->setGeometry(QRect(0, 0, 681, 251));
        ajouter_emp_2 = new QGroupBox(modifier_emp);
        ajouter_emp_2->setObjectName(QStringLiteral("ajouter_emp_2"));
        ajouter_emp_2->setGeometry(QRect(0, 0, 711, 321));
        ajouter_emp_2->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(ajouter_emp_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 70, 47, 13));
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(ajouter_emp_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 100, 47, 13));
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_20 = new QLabel(ajouter_emp_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 170, 101, 16));
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_21 = new QLabel(ajouter_emp_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 200, 91, 16));
        label_21->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_mnom = new QLineEdit(ajouter_emp_2);
        lineEdit_mnom->setObjectName(QStringLiteral("lineEdit_mnom"));
        lineEdit_mnom->setGeometry(QRect(130, 70, 113, 20));
        lineEdit_mnom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_mprenom = new QLineEdit(ajouter_emp_2);
        lineEdit_mprenom->setObjectName(QStringLiteral("lineEdit_mprenom"));
        lineEdit_mprenom->setGeometry(QRect(130, 100, 113, 20));
        lineEdit_mprenom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_mnumero = new QLineEdit(ajouter_emp_2);
        lineEdit_mnumero->setObjectName(QStringLiteral("lineEdit_mnumero"));
        lineEdit_mnumero->setGeometry(QRect(130, 200, 113, 20));
        lineEdit_mnumero->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_mnumero->setMaxLength(8);
        label_22 = new QLabel(ajouter_emp_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 140, 47, 13));
        label_22->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_memail = new QLineEdit(ajouter_emp_2);
        lineEdit_memail->setObjectName(QStringLiteral("lineEdit_memail"));
        lineEdit_memail->setGeometry(QRect(130, 130, 211, 20));
        lineEdit_memail->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        label_23 = new QLabel(ajouter_emp_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(260, 70, 47, 13));
        label_23->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_msalaire = new QLineEdit(ajouter_emp_2);
        lineEdit_msalaire->setObjectName(QStringLiteral("lineEdit_msalaire"));
        lineEdit_msalaire->setGeometry(QRect(310, 70, 113, 20));
        lineEdit_msalaire->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        pushButton_quitter_2 = new QPushButton(ajouter_emp_2);
        pushButton_quitter_2->setObjectName(QStringLiteral("pushButton_quitter_2"));
        pushButton_quitter_2->setGeometry(QRect(460, 80, 75, 23));
        pushButton_quitter_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_modifieremploye = new QPushButton(ajouter_emp_2);
        pushButton_modifieremploye->setObjectName(QStringLiteral("pushButton_modifieremploye"));
        pushButton_modifieremploye->setGeometry(QRect(460, 50, 75, 23));
        pushButton_modifieremploye->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        label_7 = new QLabel(ajouter_emp_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 10, 161, 41));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_cinm = new QLineEdit(ajouter_emp_2);
        lineEdit_cinm->setObjectName(QStringLiteral("lineEdit_cinm"));
        lineEdit_cinm->setGeometry(QRect(170, 20, 113, 20));
        lineEdit_cinm->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        recherchercin = new QPushButton(ajouter_emp_2);
        recherchercin->setObjectName(QStringLiteral("recherchercin"));
        recherchercin->setGeometry(QRect(290, 20, 91, 23));
        recherchercin->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        dateEdit_m = new QDateEdit(ajouter_emp_2);
        dateEdit_m->setObjectName(QStringLiteral("dateEdit_m"));
        dateEdit_m->setGeometry(QRect(130, 170, 110, 22));
        dateEdit_m->setMaximumDateTime(QDateTime(QDate(2020, 12, 31), QTime(23, 59, 59)));
        dateEdit_m->setMaximumDate(QDate(2020, 12, 31));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox = new QGroupBox(tab_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 721, 361));
        tab_employe = new QTableView(groupBox);
        tab_employe->setObjectName(QStringLiteral("tab_employe"));
        tab_employe->setGeometry(QRect(10, 60, 591, 261));
        tab_employe->setStyleSheet(QStringLiteral(""));
        pushButton_trinom = new QPushButton(groupBox);
        pushButton_trinom->setObjectName(QStringLiteral("pushButton_trinom"));
        pushButton_trinom->setGeometry(QRect(10, 30, 91, 23));
        pushButton_trinom->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_trisalaire = new QPushButton(groupBox);
        pushButton_trisalaire->setObjectName(QStringLiteral("pushButton_trisalaire"));
        pushButton_trisalaire->setGeometry(QRect(110, 30, 111, 23));
        pushButton_trisalaire->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_tricin = new QPushButton(groupBox);
        pushButton_tricin->setObjectName(QStringLiteral("pushButton_tricin"));
        pushButton_tricin->setGeometry(QRect(230, 30, 91, 23));
        pushButton_tricin->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(340, 30, 141, 22));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_emprech = new QLineEdit(groupBox);
        lineEdit_emprech->setObjectName(QStringLiteral("lineEdit_emprech"));
        lineEdit_emprech->setGeometry(QRect(490, 30, 113, 20));
        lineEdit_emprech->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_emprech->setMaxLength(20);
        pushButton_rechercheremp = new QPushButton(groupBox);
        pushButton_rechercheremp->setObjectName(QStringLiteral("pushButton_rechercheremp"));
        pushButton_rechercheremp->setGeometry(QRect(610, 30, 81, 23));
        pushButton_rechercheremp->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_imprimer = new QPushButton(groupBox);
        pushButton_imprimer->setObjectName(QStringLiteral("pushButton_imprimer"));
        pushButton_imprimer->setGeometry(QRect(610, 70, 75, 23));
        pushButton_imprimer->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_pdf = new QPushButton(groupBox);
        pushButton_pdf->setObjectName(QStringLiteral("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(610, 110, 75, 23));
        pushButton_pdf->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_quitter_3 = new QPushButton(groupBox);
        pushButton_quitter_3->setObjectName(QStringLiteral("pushButton_quitter_3"));
        pushButton_quitter_3->setGeometry(QRect(610, 220, 75, 23));
        pushButton_quitter_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        supprimer_emp = new QGroupBox(tab_6);
        supprimer_emp->setObjectName(QStringLiteral("supprimer_emp"));
        supprimer_emp->setGeometry(QRect(0, 0, 721, 321));
        label_8 = new QLabel(supprimer_emp);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 60, 161, 41));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_supcin = new QLineEdit(supprimer_emp);
        lineEdit_supcin->setObjectName(QStringLiteral("lineEdit_supcin"));
        lineEdit_supcin->setGeometry(QRect(180, 70, 113, 20));
        lineEdit_supcin->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_supcin->setMaxLength(8);
        pushButton_supremploye = new QPushButton(supprimer_emp);
        pushButton_supremploye->setObjectName(QStringLiteral("pushButton_supremploye"));
        pushButton_supremploye->setGeometry(QRect(330, 70, 75, 23));
        pushButton_supremploye->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_quitter_4 = new QPushButton(supprimer_emp);
        pushButton_quitter_4->setObjectName(QStringLiteral("pushButton_quitter_4"));
        pushButton_quitter_4->setGeometry(QRect(330, 100, 75, 23));
        pushButton_quitter_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        tabWidget_2->addTab(tab_6, QString());
        tabWidget->addTab(Tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 761, 371));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        ajout_auth = new QGroupBox(tab_7);
        ajout_auth->setObjectName(QStringLiteral("ajout_auth"));
        ajout_auth->setGeometry(QRect(0, 0, 721, 311));
        ajout_auth->setStyleSheet(QStringLiteral("background-color: rgb(181, 197, 255);"));
        lineEditnometprenom = new QLineEdit(ajout_auth);
        lineEditnometprenom->setObjectName(QStringLiteral("lineEditnometprenom"));
        lineEditnometprenom->setGeometry(QRect(170, 40, 113, 20));
        lineEditnometprenom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(ajout_auth);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 40, 91, 16));
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(ajout_auth);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 120, 81, 16));
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_mdp = new QLineEdit(ajout_auth);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));
        lineEdit_mdp->setGeometry(QRect(170, 120, 113, 20));
        lineEdit_mdp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_mdp->setEchoMode(QLineEdit::Password);
        pushButton_ajoutprofil = new QPushButton(ajout_auth);
        pushButton_ajoutprofil->setObjectName(QStringLiteral("pushButton_ajoutprofil"));
        pushButton_ajoutprofil->setGeometry(QRect(390, 60, 75, 23));
        pushButton_ajoutprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_quitter = new QPushButton(ajout_auth);
        pushButton_quitter->setObjectName(QStringLiteral("pushButton_quitter"));
        pushButton_quitter->setGeometry(QRect(390, 90, 75, 23));
        pushButton_quitter->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        label_13 = new QLabel(ajout_auth);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 80, 101, 16));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_id = new QLineEdit(ajout_auth);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(170, 80, 113, 20));
        lineEdit_id->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        tabWidget_3->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        modifier_auth = new QGroupBox(tab_9);
        modifier_auth->setObjectName(QStringLiteral("modifier_auth"));
        modifier_auth->setGeometry(QRect(0, 0, 711, 321));
        ajout_auth_2 = new QGroupBox(modifier_auth);
        ajout_auth_2->setObjectName(QStringLiteral("ajout_auth_2"));
        ajout_auth_2->setGeometry(QRect(0, 0, 721, 321));
        mnom = new QLineEdit(ajout_auth_2);
        mnom->setObjectName(QStringLiteral("mnom"));
        mnom->setGeometry(QRect(170, 100, 113, 20));
        mnom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        label_34 = new QLabel(ajout_auth_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(50, 100, 91, 16));
        label_34->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_36 = new QLabel(ajout_auth_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(50, 140, 81, 16));
        label_36->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_mmdp = new QLineEdit(ajout_auth_2);
        lineEdit_mmdp->setObjectName(QStringLiteral("lineEdit_mmdp"));
        lineEdit_mmdp->setGeometry(QRect(170, 140, 113, 20));
        lineEdit_mmdp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_mmdp->setEchoMode(QLineEdit::Password);
        pushButton_modifierprofil = new QPushButton(ajout_auth_2);
        pushButton_modifierprofil->setObjectName(QStringLiteral("pushButton_modifierprofil"));
        pushButton_modifierprofil->setGeometry(QRect(310, 100, 75, 23));
        pushButton_modifierprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_5 = new QPushButton(ajout_auth_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 130, 75, 23));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        label_14 = new QLabel(ajout_auth_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 30, 131, 21));
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_mid = new QLineEdit(ajout_auth_2);
        lineEdit_mid->setObjectName(QStringLiteral("lineEdit_mid"));
        lineEdit_mid->setGeometry(QRect(180, 30, 113, 20));
        lineEdit_mid->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        rechercherid = new QPushButton(ajout_auth_2);
        rechercherid->setObjectName(QStringLiteral("rechercherid"));
        rechercherid->setGeometry(QRect(310, 30, 91, 23));
        rechercherid->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        tabWidget_3->addTab(tab_9, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_2 = new QGroupBox(tab_8);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 721, 321));
        trinomprofil = new QPushButton(groupBox_2);
        trinomprofil->setObjectName(QStringLiteral("trinomprofil"));
        trinomprofil->setGeometry(QRect(600, 60, 91, 23));
        trinomprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        triidprofil = new QPushButton(groupBox_2);
        triidprofil->setObjectName(QStringLiteral("triidprofil"));
        triidprofil->setGeometry(QRect(600, 90, 91, 23));
        triidprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_imprimerprofil = new QPushButton(groupBox_2);
        pushButton_imprimerprofil->setObjectName(QStringLiteral("pushButton_imprimerprofil"));
        pushButton_imprimerprofil->setGeometry(QRect(600, 130, 91, 23));
        pushButton_imprimerprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_pdfprofil = new QPushButton(groupBox_2);
        pushButton_pdfprofil->setObjectName(QStringLiteral("pushButton_pdfprofil"));
        pushButton_pdfprofil->setGeometry(QRect(600, 160, 91, 23));
        pushButton_pdfprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 240, 91, 23));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_rechprofil = new QPushButton(groupBox_2);
        pushButton_rechprofil->setObjectName(QStringLiteral("pushButton_rechprofil"));
        pushButton_rechprofil->setGeometry(QRect(270, 20, 81, 23));
        pushButton_rechprofil->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_profilrech = new QLineEdit(groupBox_2);
        lineEdit_profilrech->setObjectName(QStringLiteral("lineEdit_profilrech"));
        lineEdit_profilrech->setGeometry(QRect(150, 20, 113, 20));
        lineEdit_profilrech->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_profilrech->setMaxLength(20);
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 20, 131, 22));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView_profil = new QTableView(groupBox_2);
        tableView_profil->setObjectName(QStringLiteral("tableView_profil"));
        tableView_profil->setGeometry(QRect(10, 50, 581, 231));
        tableView_profil->setStyleSheet(QStringLiteral(""));
        tabWidget_3->addTab(tab_8, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        supprimer_auth = new QGroupBox(tab_10);
        supprimer_auth->setObjectName(QStringLiteral("supprimer_auth"));
        supprimer_auth->setGeometry(QRect(0, 0, 721, 311));
        label_15 = new QLabel(supprimer_auth);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 70, 131, 21));
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_scin_admin = new QLineEdit(supprimer_auth);
        lineEdit_scin_admin->setObjectName(QStringLiteral("lineEdit_scin_admin"));
        lineEdit_scin_admin->setGeometry(QRect(160, 70, 113, 20));
        lineEdit_scin_admin->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_scin_admin->setMaxLength(8);
        pushButton_spradmin = new QPushButton(supprimer_auth);
        pushButton_spradmin->setObjectName(QStringLiteral("pushButton_spradmin"));
        pushButton_spradmin->setGeometry(QRect(300, 70, 75, 23));
        pushButton_spradmin->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_retouradmin = new QPushButton(supprimer_auth);
        pushButton_retouradmin->setObjectName(QStringLiteral("pushButton_retouradmin"));
        pushButton_retouradmin->setGeometry(QRect(300, 100, 75, 23));
        pushButton_retouradmin->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background: transparent;\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"color: rgb(255, 255, 255);	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 0, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(255, 0, 0);\n"
"	border-color:rgb(255, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        tabWidget_3->addTab(tab_10, QString());
        tabWidget->addTab(tab_2, QString());

        retranslateUi(gest_emp_auth);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gest_emp_auth);
    } // setupUi

    void retranslateUi(QWidget *gest_emp_auth)
    {
        gest_emp_auth->setWindowTitle(QApplication::translate("gest_emp_auth", "Form", Q_NULLPTR));
        ajouter_emp->setTitle(QString());
        label->setText(QApplication::translate("gest_emp_auth", "Nom :", Q_NULLPTR));
        label_2->setText(QApplication::translate("gest_emp_auth", "Prenom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("gest_emp_auth", "CIN :", Q_NULLPTR));
        label_4->setText(QApplication::translate("gest_emp_auth", "Date de naissance :", Q_NULLPTR));
        label_5->setText(QApplication::translate("gest_emp_auth", "Numero de tel :", Q_NULLPTR));
        pushButton_ajouteremploye->setText(QApplication::translate("gest_emp_auth", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gest_emp_auth", "Quiter", Q_NULLPTR));
        label_6->setText(QApplication::translate("gest_emp_auth", "Email :", Q_NULLPTR));
        label_16->setText(QApplication::translate("gest_emp_auth", "Salaire :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("gest_emp_auth", "Ajouter employ\303\251", Q_NULLPTR));
        modifier_emp->setTitle(QString());
        ajouter_emp_2->setTitle(QString());
        label_17->setText(QApplication::translate("gest_emp_auth", "Nom :", Q_NULLPTR));
        label_18->setText(QApplication::translate("gest_emp_auth", "Prenom :", Q_NULLPTR));
        label_20->setText(QApplication::translate("gest_emp_auth", "Date de naissance :", Q_NULLPTR));
        label_21->setText(QApplication::translate("gest_emp_auth", "Numero de tel :", Q_NULLPTR));
        label_22->setText(QApplication::translate("gest_emp_auth", "Email :", Q_NULLPTR));
        label_23->setText(QApplication::translate("gest_emp_auth", "Salaire :", Q_NULLPTR));
        pushButton_quitter_2->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        pushButton_modifieremploye->setText(QApplication::translate("gest_emp_auth", "Modifier", Q_NULLPTR));
        label_7->setText(QApplication::translate("gest_emp_auth", "Le CIN d'employ\303\251 \303\240 modifier :", Q_NULLPTR));
        recherchercin->setText(QApplication::translate("gest_emp_auth", "Rechercher", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("gest_emp_auth", "Modifier employ\303\251", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_trinom->setText(QApplication::translate("gest_emp_auth", "Trier par nom", Q_NULLPTR));
        pushButton_trisalaire->setText(QApplication::translate("gest_emp_auth", "Trier par salaire", Q_NULLPTR));
        pushButton_tricin->setText(QApplication::translate("gest_emp_auth", "Trier par CIN", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("gest_emp_auth", "Rechercher par salaire", Q_NULLPTR)
         << QApplication::translate("gest_emp_auth", "Rechercher par CIN", Q_NULLPTR)
         << QApplication::translate("gest_emp_auth", "Rechercher par nom", Q_NULLPTR)
        );
        pushButton_rechercheremp->setText(QApplication::translate("gest_emp_auth", "Rechercher", Q_NULLPTR));
        pushButton_imprimer->setText(QApplication::translate("gest_emp_auth", "Imprimer", Q_NULLPTR));
        pushButton_pdf->setText(QApplication::translate("gest_emp_auth", "PDF", Q_NULLPTR));
        pushButton_quitter_3->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("gest_emp_auth", "Consulter employ\303\251", Q_NULLPTR));
        supprimer_emp->setTitle(QString());
        label_8->setText(QApplication::translate("gest_emp_auth", "Le CIN d'employ\303\251 \303\240 supprimer :", Q_NULLPTR));
        pushButton_supremploye->setText(QApplication::translate("gest_emp_auth", "Supprimer", Q_NULLPTR));
        pushButton_quitter_4->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("gest_emp_auth", "Supprimer employ\303\251", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Tab), QApplication::translate("gest_emp_auth", "Gestion des employ\303\251(e)s", Q_NULLPTR));
        ajout_auth->setTitle(QString());
        label_9->setText(QApplication::translate("gest_emp_auth", "Nom d'utilisateur :", Q_NULLPTR));
        label_11->setText(QApplication::translate("gest_emp_auth", "Mot de passe :", Q_NULLPTR));
        pushButton_ajoutprofil->setText(QApplication::translate("gest_emp_auth", "Ajouter", Q_NULLPTR));
        pushButton_quitter->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        label_13->setText(QApplication::translate("gest_emp_auth", "Identifiant :", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("gest_emp_auth", "Ajouter profil", Q_NULLPTR));
        modifier_auth->setTitle(QString());
        ajout_auth_2->setTitle(QString());
        label_34->setText(QApplication::translate("gest_emp_auth", "Nom d'utilisateur :", Q_NULLPTR));
        label_36->setText(QApplication::translate("gest_emp_auth", "Mot de passe :", Q_NULLPTR));
        pushButton_modifierprofil->setText(QApplication::translate("gest_emp_auth", "Modifier", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        label_14->setText(QApplication::translate("gest_emp_auth", "L'id de l'admin \303\240 modifier :", Q_NULLPTR));
        rechercherid->setText(QApplication::translate("gest_emp_auth", "Rechercher", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("gest_emp_auth", "Modifier profil", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        trinomprofil->setText(QApplication::translate("gest_emp_auth", "Trier par nom", Q_NULLPTR));
        triidprofil->setText(QApplication::translate("gest_emp_auth", "Trier par id", Q_NULLPTR));
        pushButton_imprimerprofil->setText(QApplication::translate("gest_emp_auth", "Imprimer", Q_NULLPTR));
        pushButton_pdfprofil->setText(QApplication::translate("gest_emp_auth", "PDF", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        pushButton_rechprofil->setText(QApplication::translate("gest_emp_auth", "Rechercher", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("gest_emp_auth", "Rechercher par ID", Q_NULLPTR)
         << QApplication::translate("gest_emp_auth", "Rechercher par nom d'utilisateur", Q_NULLPTR)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("gest_emp_auth", "Consulter Profils", Q_NULLPTR));
        supprimer_auth->setTitle(QString());
        label_15->setText(QApplication::translate("gest_emp_auth", "Id de l'admin \303\240 supprimer :", Q_NULLPTR));
        pushButton_spradmin->setText(QApplication::translate("gest_emp_auth", "Supprimer", Q_NULLPTR));
        pushButton_retouradmin->setText(QApplication::translate("gest_emp_auth", "Quitter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("gest_emp_auth", "Retirer profil", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gest_emp_auth", "Gestion des profils", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gest_emp_auth: public Ui_gest_emp_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEST_EMP_AUTH_H
