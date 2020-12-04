#ifndef filmCONTROLLER_H
#define filmCONTROLLER_H

#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class film
{
public:
    film();
    film(QString nom_film,int duree_film,QDate date_film,int reference_film);
    bool ajouter();
    QSqlQueryModel *afficher();
    bool modifier();
    bool supprimer();
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *getIDs();
private:
    int reference_film;
    int duree_film;
    QString nom_film;
    QDate date_film;
};

#endif // filmCONTROLLER_H
