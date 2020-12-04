#ifndef MOEZ_H
#define MOEZ_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class Moez; }
QT_END_NAMESPACE

class Moez : public QDialog
{
    Q_OBJECT

public:
    Moez(QWidget *parent = nullptr);
    ~Moez();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_3_clicked();

    void on_pb_supprimer_4_clicked();

    void on_data_clicked(const QModelIndex &index);

    void on_lineEdit_id_6_textChanged(const QString &arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pb_ajouter_2_clicked();

    void on_pb_supprimer_5_clicked();

    void on_pb_supprimer_6_clicked();

    void on_lineEdit_id_7_textChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_data_2_clicked(const QModelIndex &index);

    void on_id_tri_currentTextChanged(const QString &arg1);

    void on_id_tri2_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton22_clicked();

private:
    Ui::Moez *ui;

};
#endif // MOEZ_H
