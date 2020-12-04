#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QWidget>

class Client
{
public:
    Client  ();
    Client(int,QString,QString);
    QString getnom();
    QString getprenom();
    int getcin();
    void setnom(QString nom);
    void setprenom(QString prenom);
    void setcin(int cin);
    bool ajouter();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherrech();
    bool modifier(int,QString,QString);
    bool rechercher(int,QString,QString);
    bool supprimer(int);
private:
    int cin;
    QString nom,prenom;

};



#endif // CLIENT_H
