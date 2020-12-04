#include "fady.h"
#include "connexion.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connexion c;
    bool test=c.ouvrirConnexion();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Database is open"),
                    QObject::tr("Connected!\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else

        QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
                    QObject::tr("Connection Failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    fady w;
    w.show();
    return a.exec();
}
