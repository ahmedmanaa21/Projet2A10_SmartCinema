#include "film.h"

film::film()
{

}

film::film(QString nom_film, int duree_film, QDate date_film, int reference_film)
{
    this->nom_film=nom_film;
    this->duree_film=duree_film;
    this->date_film=date_film;
    this->reference_film=reference_film;

}

bool film::ajouter()
{
        QSqlQuery query;
        query.prepare("INSERT INTO film (nom_film, duree_film, date_film,reference_film) "
                            "VALUES (:nom_film, :duree_film, :date_film,:reference_film)");
        query.bindValue(":nom_film", nom_film);
        query.bindValue(":duree_film", duree_film);
        query.bindValue(":date_film", date_film);
        query.bindValue(":reference_film", reference_film);

        return    query.exec();
}

QSqlQueryModel *film::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from film");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_film"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("duree_film"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_film"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("reference_film"));
    return model;
}

bool film::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE film SET duree_film=:duree_film, date_film=:date_film,reference_film=:reference_film "
                        "WHERE nom_film=:nom_film");
    query.bindValue(":nom_film", nom_film);
    query.bindValue(":duree_film", duree_film);
    query.bindValue(":date_film", date_film);
    query.bindValue(":reference_film", reference_film);
    return    query.exec();
}

bool film::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM film WHERE nom_film=:nom_film");
    query.bindValue(":nom_film", nom_film);
    return    query.exec();
}

QSqlQueryModel *film::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from film " +cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_film"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("duree_film"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_film"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("reference_film"));
    return model;
}

QSqlQueryModel *film::getIDs()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from film");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_film"));
    return model;
}
