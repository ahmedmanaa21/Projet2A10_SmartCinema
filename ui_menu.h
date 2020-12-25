/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_quitermenu;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(720, 375);
        groupBox = new QGroupBox(Menu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 721, 381));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/authb.jpg);"));
        pushButton_quitermenu = new QPushButton(groupBox);
        pushButton_quitermenu->setObjectName(QStringLiteral("pushButton_quitermenu"));
        pushButton_quitermenu->setGeometry(QRect(80, 300, 75, 23));
        pushButton_quitermenu->setStyleSheet(QLatin1String("QPushButton\n"
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
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 0, 131, 91));
        frame->setStyleSheet(QStringLiteral("image: url(:/logoApp.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 100, 201, 23));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:2px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 255, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgb(255, 255, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 140, 201, 23));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:2px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 255, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgb(255, 255, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 180, 201, 23));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:2px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 255, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgb(255, 255, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 260, 201, 23));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:2px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 255, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgb(255, 255, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 220, 201, 23));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:2px;\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(255, 255, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgb(255, 255, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_quitermenu->setText(QApplication::translate("Menu", "Quitter", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Menu", "Gestion Employ\303\251s/Profils", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Menu", "Gestion Clients", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Menu", "Gestion Stocks", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Menu", "Gestion Tickets/Reservations", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Menu", "Gestion Films/Programmes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
