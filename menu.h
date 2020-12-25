#ifndef MENU_H
#define MENU_H
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMainWindow>
#include "gest_emp_auth.h"
#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:

    void on_pushButton_quitermenu_clicked();

    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
    gest_emp_auth *G;
};

#endif // MENU_H
