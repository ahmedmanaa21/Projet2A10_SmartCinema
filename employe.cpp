#include "employe.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Employe::Employe()
{
cin=0;nom=" ";prenom=" ";datedn=" ";email=" ";salaire=" ";num=" ";
}

Employe::Employe(int cin,QString nom,QString prenom,QString datedn,QString email,QString salaire,QString num)
{
 this->cin=cin;
 this->nom=nom;
 this->prenom=prenom;
 this->email=email;
 this->datedn=datedn;
 this->salaire=salaire;
 this->num=num;
}
int Employe::getcin(){return cin;}
QString Employe::getnom(){return nom;}
QString Employe::getprenom(){return prenom;}
QString Employe::getdatedb(){return datedn;}
QString Employe::getemail(){return email;}
QString Employe::getsalaire(){return salaire;}
QString Employe::getnum(){return num;}

void Employe::setcin(int cin){this->cin=cin;}
void Employe::setnom(QString nom){this->nom=nom;}
void Employe::setprenom(QString prenom){this->prenom=prenom;}
void Employe::setdatedn(QString datedn){this->datedn=datedn;}
void Employe::setemail(QString email){this->email=email;}
void Employe::setsalaire(QString salaire){this->salaire=salaire;}
void Employe::setnum(QString num){this->num=num;}
bool Employe::ajouter()
{
    bool test=false;
    QSqlQuery query;
    QString cin_string=QString::number(cin);
    query.prepare("INSERT INTO employe (nom,prenom,cin,email,salaire,numero,datedn) "
                  "VALUES (:nom,:prenom,:cin,:email,:salaire,:numero,:datedn)");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin", cin_string);
    query.bindValue(":email", email);
    query.bindValue(":salaire", salaire);
    query.bindValue(":numero", num);
    query.bindValue(":datedn", datedn);
    return query.exec();

    return test;
}
bool Employe::supprimer(int cin){

    QSqlQuery query;
    query.prepare(" Delete from employe where cin=:cin");
    query.bindValue(":cin", cin);
    return query.exec();
}
QSqlQueryModel* Employe::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT* FROM employe");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
    return model;
}
