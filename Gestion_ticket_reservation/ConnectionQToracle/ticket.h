#ifndef TICKET_H
#define TICKET_H

#include <QString>
#include <QSqlQueryModel>


class Ticket
{
public:
    Ticket();
    Ticket(QString,QString,QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool modifier(QString);
    QString getRef();
    void setRef(QString);
    QSqlQueryModel* AfficherTicketMulti(QString critere,QString value);
    bool rechercheTicketMulti(QString critere,QString value);
    QSqlQueryModel* afficherTicketsTri(QString critere);
private:
    QString Reference, Prix, Nom;
};

#endif // TICKET_H
