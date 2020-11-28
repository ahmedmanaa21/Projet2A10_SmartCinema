#include "authentification.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
authentification::authentification()
{
id=0;nomutilisateur=" ";mdp=" ";
}

authentification::authentification(int id,QString nomutilisateur,QString mdp)
{
 this->id=id;
 this->nomutilisateur=nomutilisateur;
 this->mdp=mdp;
}
int authentification::getid(){return id;}
QString authentification::getnomutilisateur(){return nomutilisateur;}
QString authentification::getmdp(){return mdp;}

void authentification::setid(int id){this->id=id;}
void authentification::setnomutilisateur(QString nomutilisateur){this->nomutilisateur=nomutilisateur;}
void authentification::setmdp(QString mdp){this->mdp=mdp;}
bool authentification::ajouter()
{
    bool test=false;
    QSqlQuery query;
    QString id_string=QString::number(id);
    query.prepare("INSERT INTO profil (nom_utilisateur,id,mot_de_passe) "
                  "VALUES (:nom_utilisateur,:id,:mot_de_passe)");
    query.bindValue(":nom_utilisateur",nomutilisateur);
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
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_utilisateur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("mot_de_passe"));
    return model;
}
