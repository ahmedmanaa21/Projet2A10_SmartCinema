#ifndef fady_H
#define fady_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class fady; }
QT_END_NAMESPACE

class fady : public QDialog
{
    Q_OBJECT

public:
    fady(QWidget *parent = nullptr);
    ~fady();

private slots:
    void on_pb_ajouter_salle_clicked();

    void on_pb_modifier_salle_clicked();

    void on_pb_supprimer_salle_clicked();

    void on_data_salle_clicked(const QModelIndex &index);

    void on_lineEdit_salle_textChanged(const QString &arg1);

    void on_rechercher_salle_currentTextChanged(const QString &arg1);

    void on_pb_ajouter_film_clicked();

    void on_pb_modifier_film_clicked();

    void on_pb_supprimer_film_clicked();

    void on_lineEdit_film_textChanged(const QString &arg1);

    void on_rechercher_film_currentTextChanged(const QString &arg1);

    void on_data_film_clicked(const QModelIndex &index);

    void on_tri_salle_currentTextChanged(const QString &arg1);

    void on_tri_film_currentTextChanged(const QString &arg1);

    void on_print_salle_clicked();

    void on_print_film_clicked();

private:
    Ui::fady *ui;

};
#endif // fady_H
