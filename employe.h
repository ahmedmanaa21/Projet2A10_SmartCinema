#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QWidget>

class Employe
{
public:
    Employe();
    Employe(int,QString,QString,QString,QString,QString,QString);
    int getcin();
    QString getnom();
    QString getprenom();
    QString getdatedn();
    QString getemail();
    QString getsalaire();
    QString getnum();

    void setcin(int cin);
    void setnom(QString nom);
    void setprenom(QString prenom);
    void setdatedn(QString datedn);
    void setemail(QString email);
    void setsalaire(QString salaire);
    void setnum(QString num);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier(int,QString,QString,QString,QString,QString,QString);
    bool rechercher(int);
    bool supprimer(int);
private:
    int cin;
    QString nom,prenom,datedn,email,salaire,num;
};

#endif // EMPLOYE_H
