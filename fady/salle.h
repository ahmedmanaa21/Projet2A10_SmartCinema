#ifndef salle_CONTROLLER_H
#define salle_CONTROLLER_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class salle
{
public:
    salle();
    salle(int numero_salle, int nombre_chaises);
    bool ajouter();
    QSqlQueryModel *afficher();
    bool modifier();
    bool supprimer();
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *getIDs();
private:
    int numero_salle,nombre_chaises;

};

#endif // salle_CONTROLLER_H
