/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_loginid;
    QLineEdit *lineEdit_loginmdp;
    QPushButton *pushButton_quiter1;
    QPushButton *pushButton_connecter;
    QPushButton *pushButton_inscrire;
    QLabel *label_4;
    QPushButton *pushButton_mdpoublie;
    QFrame *frame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(716, 354);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 721, 381));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/authb.jpg);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 81, 16));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 81, 16));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_loginid = new QLineEdit(groupBox);
        lineEdit_loginid->setObjectName(QStringLiteral("lineEdit_loginid"));
        lineEdit_loginid->setGeometry(QRect(100, 100, 113, 20));
        lineEdit_loginid->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_loginmdp = new QLineEdit(groupBox);
        lineEdit_loginmdp->setObjectName(QStringLiteral("lineEdit_loginmdp"));
        lineEdit_loginmdp->setGeometry(QRect(100, 130, 113, 20));
        lineEdit_loginmdp->setFocusPolicy(Qt::WheelFocus);
        lineEdit_loginmdp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_loginmdp->setEchoMode(QLineEdit::Password);
        pushButton_quiter1 = new QPushButton(groupBox);
        pushButton_quiter1->setObjectName(QStringLiteral("pushButton_quiter1"));
        pushButton_quiter1->setGeometry(QRect(20, 170, 75, 23));
        pushButton_quiter1->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushButton_connecter = new QPushButton(groupBox);
        pushButton_connecter->setObjectName(QStringLiteral("pushButton_connecter"));
        pushButton_connecter->setGeometry(QRect(110, 170, 91, 23));
        pushButton_connecter->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushButton_inscrire = new QPushButton(groupBox);
        pushButton_inscrire->setObjectName(QStringLiteral("pushButton_inscrire"));
        pushButton_inscrire->setGeometry(QRect(210, 170, 75, 23));
        pushButton_inscrire->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 210, 111, 16));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_mdpoublie = new QPushButton(groupBox);
        pushButton_mdpoublie->setObjectName(QStringLiteral("pushButton_mdpoublie"));
        pushButton_mdpoublie->setGeometry(QRect(130, 210, 161, 23));
        pushButton_mdpoublie->setStyleSheet(QLatin1String("QPushButton\n"
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
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 131, 91));
        frame->setStyleSheet(QStringLiteral("image: url(:/logoApp.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Mot de passe :", Q_NULLPTR));
        pushButton_quiter1->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        pushButton_connecter->setText(QApplication::translate("MainWindow", "Se connecter", Q_NULLPTR));
        pushButton_inscrire->setText(QApplication::translate("MainWindow", "S'inscrire", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Mot de passe oubli\303\251 ?", Q_NULLPTR));
        pushButton_mdpoublie->setText(QApplication::translate("MainWindow", "Modifier mot de passe", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
