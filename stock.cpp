#include "stock.h"

stock::stock()
{

}

stock::stock(int entree, QString lieu, int id_materiel1, int id_materiel2, QDate datee)
{
    this->entree=entree;
    this->lieu=lieu;
    this->id_materiel1=id_materiel1;
    this->id_materiel2=id_materiel2;

    this->datee=datee;
}

bool stock::ajouter()
{
        QSqlQuery query;
        query.prepare("INSERT INTO STOCK (ENTREE, LIEU, ID_MATERIEL1,ID_MATERIEL2,DATEE) "
                            "VALUES (:entree, :lieu, :id_materiel1,:id_materiel2,:datee)");
        query.bindValue(":entree", entree);
        query.bindValue(":lieu", lieu);
        query.bindValue(":id_materiel1", id_materiel1);
        query.bindValue(":id_materiel2", id_materiel2);
        query.bindValue(":datee", datee);
        return    query.exec();
}

QSqlQueryModel *stock::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from STOCK");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("LIEU"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID MATERIEL1"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID MATERIEL2"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATEE"));
    return model;
}

bool stock::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE STOCK SET LIEU=:lieu, ID_MATERIEL1=:id_materiel1,ID_MATERIEL2=:id_materiel2,DATEE=:datee "
                        "WHERE ENTREE=:entree");
    query.bindValue(":entree", entree);
    query.bindValue(":lieu", lieu);
    query.bindValue(":id_materiel1", id_materiel1);
    query.bindValue(":id_materiel2", id_materiel2);
    query.bindValue(":datee", datee);
    return    query.exec();
}

bool stock::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM STOCK WHERE ENTREE=:entree");
    query.bindValue(":entree", entree);
    return    query.exec();
}

QSqlQueryModel *stock::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from STOCK " +cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("LIEU"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID MATERIEL1"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID MATERIEL2"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATEE"));
    return model;
}

QSqlQueryModel *stock::getIDs()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from STOCK");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    return model;
}
