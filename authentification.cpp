#include "authentification.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
authentification::authentification()
{
id=0;nometprenom=" ";numero=" ";adresse=" ";mdp=" ";
}

authentification::authentification(int id,QString nometprenom,QString numero,QString adresse,QString mdp)
{
 this->id=id;
 this->nometprenom=nometprenom;
 this->numero=numero;
 this->adresse=adresse;
 this->mdp=mdp;
}
int authentification::getid(){return id;}
QString authentification::getnometprenom(){return nometprenom;}
QString authentification::getnumero(){return numero;}
QString authentification::getadresse(){return adresse;}
QString authentification::getmdp(){return mdp;}

void authentification::setid(int id){this->id=id;}
void authentification::setnometprenom(QString nometprenom){this->nometprenom=nometprenom;}
void authentification::setnumero(QString numero){this->numero=numero;}
void authentification::setadresse(QString adresse){this->adresse=adresse;}
void authentification::setmdp(QString mdp){this->mdp=mdp;}
bool authentification::ajouter()
{
    bool test=false;
    QSqlQuery query;
    QString id_string=QString::number(id);
    query.prepare("INSERT INTO profil (nom_prenom,telephone,adresse,id,mot_de_passe) "
                  "VALUES (:nom_prenom,:telephone,:adresse,:id,:mot_de_passe)");
    query.bindValue(":nom_prenom",nometprenom);
    query.bindValue(":telephone", numero);
    query.bindValue(":adresse", adresse);
    query.bindValue(":id", id_string);
    query.bindValue(":mot_de_passe", mdp);
    return query.exec();
    return test;
}
bool authentification::supprimer(int id){

    QSqlQuery query;
    query.prepare(" Delete from profil where id=:id");
    query.bindValue(":id", id);
    return query.exec();
}

QSqlQueryModel* authentification::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT* FROM profil");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_prenom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("telephone"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("mot_de_passe"));
    return model;
}
