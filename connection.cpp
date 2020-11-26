#include "connection.h"
#include "QSqlDatabase"
#include <QDebug>
#include <QSqlError>
connection::connection()
{

}

bool connection::createConnection(){
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("source_projet2A");
    db.setUserName("ahmedm");
    db.setPassword("esprit");

    if(db.open())
        test=true;
   qDebug() << db.lastError().text();
    return test;
}
