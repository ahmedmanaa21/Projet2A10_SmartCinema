#include "Client.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
Client::Client()
{
cin=0;nom=" ";prenom=" ";
}


Client::Client(int cin,QString nom,QString prenom)
{this->cin=cin;this->nom=nom;this->prenom;}
QString Client:: getnom(){return nom;}
QString Client:: getprenom(){ return prenom;}
int Client:: getcin(){return cin;}
void Client:: setnom(QString nom){this->nom=nom;}
void Client:: setprenom(QString prenom){this->prenom;}
void Client:: setcin(int cin){this->cin=cin;}
bool Client::ajouter()
{
    bool test=false;
    return test;
    QSqlQuery query;
    QString cin_string=QString::number(cin);
       query.prepare("INSERT INTO client (cin, nom, prenom) "
                     "VALUES (:id, :forename, :surname)");
       query.bindValue(":id",cin_string);
       query.bindValue(":forename", nom);
       query.bindValue(":surname", prenom);
     return  query.exec();
}
bool Client::supprimer(int cin){

    QSqlQuery query;
    query.prepare(" Delete from client where cin=:cin");
    query.bindValue(":cin", cin);
    return query.exec();
}
QSqlQueryModel* Client::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT* FROM client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}
bool Client::modifier(int cin,QString nom,QString prenom){
    QSqlQuery query;
    QString cin_string=QString::number(cin);
    query.prepare("update client SET nom=:nom , prenom=:prenom, where cin=:cin");
    query.bindValue(":cin", cin_string);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);

    return query.exec();
}
bool Client::rechercher(int cin,QString nom,QString prenom)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    QSqlQuery query;
    bool retour=0;
    int count=0;
    query.prepare("SELECT * FROM EMPLOYE WHERE cin= ? or nom= ? or prenom= ?");
    query.addBindValue(cin);
    query.addBindValue(nom);
  query.addBindValue(prenom);
    if(query.exec() )
        {
while (query.next())
   {
   count ++;
    }
if(count==1)
   {
    msgBox.setText("client existe");
    msgBox.exec();
    retour=1;
   }
else if (count<1)
{
    msgBox1.setText("client n'existe pas");
        msgBox1.exec();
        retour=0;
}
        }
    return retour;
}


