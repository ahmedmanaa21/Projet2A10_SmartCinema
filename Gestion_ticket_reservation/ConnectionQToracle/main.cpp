#include "mainwindow.h"
#include <QDebug>
#include <QApplication>
#include "connection.h"
#include "ticket_reservation.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection C;

    bool test = C.createConnection();
Ticket_Reservation t;
    if(test){
        qDebug() <<"Connexion réussite";
    t.show();
    }

    else
        qDebug() <<"erreur de conexion";

 //   w.show();
    return a.exec();
}
