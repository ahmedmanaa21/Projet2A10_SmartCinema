#ifndef STOCKCONTROLLER_H
#define STOCKCONTROLLER_H

#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class stock
{
public:
    stock();
    stock(int,QString,int,int,QDate);
    bool ajouter();
    QSqlQueryModel *afficher();
    bool modifier();
    bool supprimer();
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *getIDs();
private:
    int entree;
    QString lieu;
    int id_materiel1,id_materiel2;
    QDate datee;
};

#endif // STOCKCONTROLLER_H
