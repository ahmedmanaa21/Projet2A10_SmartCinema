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
    authentification(int,QString,QString);
    int getid();
    QString getnomutilisateur();
    QString getmdp();

    void setid(int id);
    void setnomutilisateur(QString nometprenom);
    void setmdp(QString mdp);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier(int,QString,QString);

    bool supprimer(int);
private:
    int id;
    QString nomutilisateur,mdp;
};

#endif // AUTHENTIFICATION_H
