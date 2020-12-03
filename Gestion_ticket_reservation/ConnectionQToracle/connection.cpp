#include "connection.h"
#include "QSqlDatabase"
#include <QDebug>
#include <QSqlError>
Connection::Connection()
{

}

bool Connection::createConnection(){
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A");
    db.setUserName("elyes");
    db.setPassword("elyes");

    if(db.open())
        test=true;
   qDebug() << db.lastError().text();
    return test;
}
