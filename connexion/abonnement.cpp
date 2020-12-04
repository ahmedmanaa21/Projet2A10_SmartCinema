#include "abonnement.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
abonnement::abonnement()
{

    num=0;date=0;nom=" ";prenom=" ";type=" ";
 }

  abonnement::abonnement(QString nom,QString prenom,QString type,int num,int date)
    {this->num=num; this->date=date;this->nom=nom;this->prenom;this->type;}
    QString abonnement:: getnom(){return nom;}
    QString abonnement:: getprenom(){ return prenom;}
    QString abonnement:: gettype(){ return type;}
    int abonnement:: getnum(){return num;}
    int abonnement:: getdate(){return date;}
    void abonnement:: setnom(QString nom){this->nom=nom;}
    void abonnement:: setprenom(QString prenom){this->prenom;}
    void abonnement:: settype(QString type){this->type;}
    void abonnement:: setnum(int num){this->num=num;}
    void abonnement:: setdate(int date){this->date=date;}
    bool abonnement::ajouter()
    {
        bool test=false;
        return test;
        QSqlQuery query;
        QString num_string=QString::number(num);
         QString date_string=QString::number(num);
           query.prepare("INSERT INTO client (num,date, nom, prenom,type) "
                         "VALUES (:num,:date, :forename, :surname,;type)");
           query.bindValue(":num",num_string);
            query.bindValue(":date",date_string);
           query.bindValue(":forename", nom);
           query.bindValue(":surname", prenom);
           query.bindValue(":surname",type);
         return  query.exec();
    }
    bool abonnement::supprimer(int num){

        QSqlQuery query;
        query.prepare(" Delete from abonnement where num=:num");
        query.bindValue(":num", num);
        return query.exec();
    }
         QSqlQueryModel* abonnement::afficher()
    {
        QSqlQueryModel* model=new QSqlQueryModel();
        model->setQuery("SELECT* FROM abonnement");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("date"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("prenom"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("type"));

        return model;
    }
         bool abonnement::modifier(int cin,QString nom,QString prenom){
             QSqlQuery query;
             QString num_string=QString::number(num);
             query.prepare("update abonnement SET nom=:nom , prenom=:prenom,type=:type, where num=:num");
             query.bindValue(":cin", num_string);
             query.bindValue(":nom",nom);
             query.bindValue(":prenom", prenom);
             query.bindValue(":type", type);

             return query.exec();
         }
         bool abonnement::rechercher(int num,QString nom)
         {
             QMessageBox msgBox;
             QMessageBox msgBox1;
             QSqlQuery query;
             bool retour=0;
             int count=0;
             query.prepare("SELECT * FROM abonnement WHERE num= ? or nom= ?");
             query.addBindValue(num);
             query.addBindValue(nom);
             if(query.exec() )
                 {
         while (query.next())
            {
            count ++;
             }
         if(count==1)
            {
             msgBox.setText("abonnement existe");
             msgBox.exec();
             retour=1;
            }
         else if (count<1)
         {
             msgBox1.setText("abonnementt n'existe pas");
                 msgBox1.exec();
                 retour=0;
         }
                 }
             return retour;
         }
