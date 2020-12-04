#ifndef ABONNEMENT_H
#define ABONNEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QWidget>

class abonnement
{
public:
    abonnement();
    abonnement(QString,QString,QString,int,int);
    QString getnom();
    QString getprenom();
     QString gettype();
    int getnum();
    int getdate();
    void setnom(QString nom);
    void setprenom(QString prenom);
    void settype(QString type);
    void setnum(int num);
    void setdate(int date);
    bool ajouter();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherrech();
    bool modifier(int,QString,QString);
    bool rechercher(int,QString);
    bool supprimer(int);
private:
    int date, num;
    QString nom,prenom,type;
};

#endif // ABONNEMENT_H
