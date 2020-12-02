#include "authentification.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>

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
    query.prepare("INSERT INTO profil (id,nom_utilisateur,mot_de_passe) "
                  "VALUES (:id,:nom_utilisateur,:mot_de_passe)");
    query.bindValue(":id", id_string);
    query.bindValue(":nom_utilisateur",nomutilisateur);
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
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_utilisateur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("mot_de_passe"));
    return model;
}
bool authentification::modifier(int id,QString nomutilisateur,QString mdp){
    QSqlQuery query;
    QString id_string=QString::number(id);
    query.prepare("update PROFIL SET nom_utilisateur=:nom_utilisateur , mot_de_passe=:mot_de_passe where id=:id");
    query.bindValue(":id", id_string);
    query.bindValue(":nom_utilisateur",nomutilisateur);
    query.bindValue(":mot_de_passe", mdp);
    return query.exec();
}
bool authentification::rechercher(int id,QString nometprenom)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    QSqlQuery query;
    bool retour=0;
    int count=0;
    query.prepare("SELECT * FROM PROFIL WHERE id= ? or nom_utilisateur= ? ");
    query.addBindValue(id);
    query.addBindValue(nometprenom);
    if(query.exec() )
        {
while (query.next())
   {
   count ++;
    }
if(count==1)
   {
    msgBox.setText("profil existe");
    msgBox.exec();
    retour=1;
   }
else if (count<1)
{
    msgBox1.setText("profil n'existe pas");
        msgBox1.exec();
        retour=0;
}
        }
    return retour;
}
