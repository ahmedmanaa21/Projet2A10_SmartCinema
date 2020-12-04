#ifndef MATERIEL_CONTROLLER_H
#define MATERIEL_CONTROLLER_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class materiel
{
public:
    materiel();
    materiel(int id, QString nom,QString prix,int entree,QString type);
    bool ajouter();
    QSqlQueryModel *afficher();
    bool modifier();
    bool supprimer();
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *getIDs();
private:
    int id,entree;
    QString nom,prix,type;
    int id_stock;

};

#endif // MATERIEL_CONTROLLER_H
