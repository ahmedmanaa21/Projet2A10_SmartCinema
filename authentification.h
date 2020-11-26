#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QWidget>

class authentification
{
public:
    authentification();
    authentification(int,QString,QString,QString,QString);
    int getid();
    QString getnometprenom();
    QString getnumero();
    QString getadresse();
    QString getmdp();

    void setid(int id);
    void setnometprenom(QString nometprenom);
    void setnumero(QString numero);
    void setadresse(QString adresse);
    void setmdp(QString mdp);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
private:
    int id;
    QString nometprenom,numero,adresse,mdp;
};

#endif // AUTHENTIFICATION_H
