#include "connection.h"
#include "QSqlDatabase"
#include <QDebug>
#include <QSqlError>
connection::connection()
{

}
bool connection::createConnection()
{
        bool test=false;
        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("Projet_2A");
        db.setUserName("Seif");
        db.setPassword("Seifchebbi123");

        if(db.open())
            test=true;
       qDebug() << db.lastError().text();
        return test;
    }






