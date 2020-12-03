/********************************************************************************
** Form generated from reading UI file 'pharmacie.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHARMACIE_H
#define UI_PHARMACIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Pharmacie
{
public:

    void setupUi(QDialog *Pharmacie)
    {
        if (Pharmacie->objectName().isEmpty())
            Pharmacie->setObjectName(QStringLiteral("Pharmacie"));
        Pharmacie->resize(400, 300);

        retranslateUi(Pharmacie);

        QMetaObject::connectSlotsByName(Pharmacie);
    } // setupUi

    void retranslateUi(QDialog *Pharmacie)
    {
        Pharmacie->setWindowTitle(QApplication::translate("Pharmacie", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Pharmacie: public Ui_Pharmacie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHARMACIE_H
