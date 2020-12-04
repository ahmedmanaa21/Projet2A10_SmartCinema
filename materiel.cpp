#include "materiel.h"

materiel::materiel()
{

}

materiel::materiel(int id, QString nom, QString prix, int id_stock,QString type)
{
    this->id=id;
    this->nom=nom;
    this->prix=prix;
    this->id_stock=id_stock;
    this->type=type;
}

bool materiel::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO MATERIEL (ID, NOM, PRIX,ID_STOCK,TYPE) "
                        "VALUES (:id, :nom, :prix,:id_stock,:type)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prix", prix);
    query.bindValue(":id_stock", id_stock);
    query.bindValue(":type", type);
    return    query.exec();
}

QSqlQueryModel *materiel::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select ID,NOM,PRIX,ID_STOCK,TYPE from MATERIEL");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID STOCK"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE"));
    return model;
}

bool materiel::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE MATERIEL SET NOM=:nom, PRIX=:prix, ID_STOCK=:id_stock , TYPE=:type "
                        "WHERE ID=:id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prix", prix);
    query.bindValue(":id_stock", id_stock);
    query.bindValue(":type", type);
    return    query.exec();
}

bool materiel::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM MATERIEL "
                        "WHERE ID=:id");
    query.bindValue(":id", id);

    return    query.exec();
}

QSqlQueryModel *materiel::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select ID,NOM,PRIX,ID_STOCK,TYPE from MATERIEL "+cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID STOCK"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE"));
    return model;
}

QSqlQueryModel *materiel::getIDs()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select ID from MATERIEL");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));

    return model;
}
