#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ticket.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>

void Ticket::setRef(QString val)
{
    Reference =val;
}
QString Ticket::getRef()
{
    return Reference;
}
Ticket::Ticket()
{
 Prix="";
 Nom="";
 Reference="";
}

Ticket::Ticket(QString reference,QString prix,QString nom)
{
 Prix=prix;
 Nom=nom;
 Reference=reference;
}

bool Ticket::ajouter()
{

    QSqlQuery query;
         query.prepare("INSERT INTO TICKETS (REFERENCE, PRIX, NOM) "
                       "VALUES (:id, :forename, :surname)");
         query.bindValue(":id",Reference);
         query.bindValue(":forename", Prix);
         query.bindValue(":surname", Nom);

        return query.exec();

}
bool Ticket::supprimer(QString id)
{
    QSqlQuery query;
         query.prepare(" Delete from TICKETS where REFERENCE=:id");
         query.bindValue(0, id);
        return query.exec();
}

bool Ticket::modifier(QString id)
{
    QSqlQuery query;
         query.prepare(" update TICKETS set REFERENCE='"+Reference+"',PRIX='"+Prix+"',NOM='"+Nom+"' where Reference='"+id+"'");
         return query.exec();
}

QSqlQueryModel* Ticket::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM TICKETS");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERENCE"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));

  return  model;
}

bool Ticket::rechercheTicketMulti(QString critere,QString value)
{
    QMessageBox msgBox;
    QSqlQuery query;

    query.prepare("SELECT * from TICKETS WHERE "+critere+" = '"+value+"' ");

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



QSqlQueryModel* Ticket::AfficherTicketMulti(QString critere,QString value)
{
    QSqlQueryModel *model = new QSqlQueryModel;



          model->setQuery("SELECT * from TICKETS WHERE "+critere+" = '"+value+"' ");


          model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERENCE"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));

    return model;
}

QSqlQueryModel* Ticket::afficherTicketsTri(QString critere)
{
    QSqlQueryModel *model = new QSqlQueryModel;



          model->setQuery("SELECT * from TICKETS ORDER BY "+critere+" ASC");


          model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERENCE"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));


    return model;
}
