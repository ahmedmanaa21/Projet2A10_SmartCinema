#include "connexion.h"

connexion::connexion()
{

}

bool connexion::ouvrirConnexion()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("GestionSalleEtFilm");
    db.setUserName("fadydk");//inserer nom de l'utilisateur
    db.setPassword("dkhill");//inserer mot de passe de cet utilisateur
    if (db.open())
        test=true;
    return  test;
}

void connexion::fermerConnexion()
{
    db.close();
}
