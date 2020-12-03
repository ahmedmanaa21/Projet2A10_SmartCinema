#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservation.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>


void Reservation::setRef(QString val)
{
    Reference =val;
}
QString Reservation::getRef()
{
    return Reference;
}
Reservation::Reservation()
{
 Nombre="";
 Date="";
 Reference="";
}

Reservation::Reservation(QString reference,QString nombre,QString date)
{
 Nombre=nombre;
 Date=date;
 Reference=reference;
}

bool Reservation::ajouter()
{

    QSqlQuery query;
         query.prepare("INSERT INTO RESERVATIONS (REFERENCE, NOMBRE, DATES) "
                       "VALUES (:id, :forename, :surname)");
         query.bindValue(":id",Reference);
         query.bindValue(":forename", Nombre);
         query.bindValue(":surname", Date);

        return query.exec();

}
bool Reservation::supprimer(QString id)
{
    QSqlQuery query;
         query.prepare(" Delete from RESERVATIONS where REFERENCE=:id");
         query.bindValue(0, id);
        return query.exec();
}

bool Reservation::modifier(QString id)
{
    QSqlQuery query;
         query.prepare(" update RESERVATIONS set REFERENCE='"+Reference+"',NOMBRE='"+Nombre+"',DATE='"+Date+"' where Reference='"+id+"'");
         return query.exec();
}

QSqlQueryModel* Reservation::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM RESERVATIONS");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERENCE"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMBRE"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE"));

  return  model;
}

bool Reservation::rechercheReservationMulti(QString critere,QString value)
{
    QMessageBox msgBox;
    QSqlQuery query;

    query.prepare("SELECT * from RESERVATIONS WHERE "+critere+" = '"+value+"' ");

    if (query.exec() && query.next())
    {

        msgBox.setText("item found");
        msgBox.exec();
        return true;
    }
    else
    {
    msgBox.setText("item not found");
    msgBox.exec();
    return false;
    }
}



QSqlQueryModel* Reservation::AfficherReservationMulti(QString critere,QString value)
{
    QSqlQueryModel *model = new QSqlQueryModel;



          model->setQuery("SELECT * from RESERVATIONS WHERE "+critere+" = '"+value+"' ");


          model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERENCE"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMBRE"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE"));

    return model;
}

QSqlQueryModel* Reservation::afficherReservationTri(QString critere)
{
    QSqlQueryModel *model = new QSqlQueryModel;



          model->setQuery("SELECT * from RESERVATIONS ORDER BY "+critere+" ASC");


          model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERENCE"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMBRE"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE"));



    return model;
}
