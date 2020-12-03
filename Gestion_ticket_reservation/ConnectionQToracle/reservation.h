#ifndef RESERVATION_H
#define RESERVATION_H
#include <QString>
#include <QSqlQueryModel>


class Reservation
{
public:
    Reservation();
    Reservation (QString,QString,QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool modifier(QString);
    QString getRef();
    void setRef(QString);
    bool rechercheReservationMulti(QString critere,QString value);
    QSqlQueryModel* AfficherReservationMulti(QString critere,QString value);
    QSqlQueryModel* afficherReservationTri(QString critere);
private:
    QString Reference, Nombre, Date;
};

#endif // RESERVATION_H
