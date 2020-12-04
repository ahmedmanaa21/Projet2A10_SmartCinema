#ifndef GEST_CLI_ABON1_H
#define GEST_CLI_ABON1_H

#include <QDialog>

namespace Ui {
class gest_cli_abon1;
}

class gest_cli_abon1 : public QDialog
{
    Q_OBJECT

public:
    explicit gest_cli_abon1(QWidget *parent = nullptr);
    ~gest_cli_abon1();

private:
    Ui::gest_cli_abon1 *ui;
};

#endif // GEST_CLI_ABON1_H
