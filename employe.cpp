#include "employe.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>

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
QString Employe::getdatedn(){return datedn;}
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
    query.prepare("INSERT INTO employe (cin,nom,prenom,email,salaire,numero,datedn) "
                  "VALUES (:cin,:nom,:prenom,:email,:salaire,:numero,:datedn)");
    query.bindValue(":cin", cin_string);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", datedn);
    query.bindValue(":salaire", email);
    query.bindValue(":numero", num);
    query.bindValue(":datedn", salaire);
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
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
    return model;
}

bool Employe::recherche_nom(QString nom)
{
    QMessageBox msgBox;
    QSqlQuery query;

    query.prepare("SELECT * FROM EMPLOYE WHERE NOM= :nom");
    query.bindValue(":nom", nom);
    if (query.exec() && query.next())
    {
            return true;
    }
    else
    {

        msgBox.setText("Employe n existe pas");
        msgBox.exec();
        return false;
    }
}



bool Employe::recherche_salaire(QString salaire)
{
    QMessageBox msgBox;
    QSqlQuery query;

    query.prepare("SELECT * FROM EMPLOYE WHERE SALAIRE= :salaire");
    query.bindValue(":salaire", salaire);
    if (query.exec() && query.next())
    {
            return true;
    }
    else
    {
        msgBox.setText("Employe n existe pas");
        msgBox.exec();
        return false;
    }
}



bool Employe::recherche_cin(int cin)
{

    QMessageBox msgBox;
    QSqlQuery query;
     QString cin_string=QString::number(cin);
    query.prepare("SELECT * FROM EMPLOYE WHERE CIN= :cin");
    query.bindValue(":cin", cin_string);
    if (query.exec() && query.next())
    {
            return true;
    }
    else
    {
        msgBox.setText("Employe n existe pas");
        msgBox.exec();
        return false;
    }
}
QSqlQueryModel* Employe::afficher_cin(int cin)
{
    QSqlQueryModel* model= new QSqlQueryModel();
    QString CIN_string=QString::number(cin);

          model->setQuery("SELECT * FROM EMPLOYE WHERE CIN='"+CIN_string+"'");

    return model;
}

QSqlQueryModel* Employe::afficher_nom(QString nom)
{
    QSqlQueryModel* model= new QSqlQueryModel();

          model->setQuery("SELECT * FROM EMPLOYE WHERE NOM='"+nom+"'");

    return model;
}

QSqlQueryModel* Employe::afficher_salaire(QString salaire)
{
    QSqlQueryModel* model= new QSqlQueryModel();

          model->setQuery("SELECT * FROM EMPLOYE WHERE SALAIRE='"+salaire+"'");

    return model;
}

bool Employe::modifier(int cin)
{
    QSqlQuery query;
    QString cin_string=QString::number(cin);
    if (recherche_cin(cin))
    {

          query.prepare("UPDATE EMPLOYE SET nom=:nom, prenom=:prenom, email=:email, salaire=:salaire, numero=:numero, datedn=:datedn WHERE CIN=:cin");
          query.bindValue(":cin", cin_string);
          query.bindValue(":nom",nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":email", datedn);
          query.bindValue(":salaire", email);
          query.bindValue(":numero", num);
          query.bindValue(":datedn", salaire);

    }
          return query.exec();
}
