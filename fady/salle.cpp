#include "salle.h"

salle::salle()
{

}

salle::salle(int numero_salle,int nombre_chaises)
{
    this->numero_salle=numero_salle;
    this->nombre_chaises=nombre_chaises;
}

bool salle::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO salle (numero_salle, NOM, nombre_chaises,numero_salle_film,TYPE) "
                        "VALUES (:numero_salle, :nom, :nombre_chaises,:numero_salle_film,:type)");
    query.bindValue(":numero_salle", numero_salle);
    query.bindValue(":nombre_chaises", nombre_chaises);
    return    query.exec();
}

QSqlQueryModel *salle::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select numero_salle,nombre_chaises from salle");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("numero_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nombre_chaises"));
    return model;
}

bool salle::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE salle SET nombre_chaises=:nombre_chaises "
                        "WHERE numero_salle=:numero_salle");
    query.bindValue(":numero_salle", numero_salle);
    query.bindValue(":nombre_chaises", nombre_chaises);
    return    query.exec();
}

bool salle::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM salle "
                        "WHERE numero_salle=:numero_salle");
    query.bindValue(":numero_salle", numero_salle);

    return    query.exec();
}

QSqlQueryModel *salle::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select numero_salle,NOM,nombre_chaises,numero_salle_film,TYPE from salle "+cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("numero_salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nombre_chaises"));
    return model;
}

QSqlQueryModel *salle::getIDs()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select numero_salle from salle");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("numero_salle"));

    return model;
}
