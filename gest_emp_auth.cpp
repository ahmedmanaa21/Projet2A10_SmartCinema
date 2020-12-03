#include "gest_emp_auth.h"
#include "ui_gest_emp_auth.h"
#include "employe.h"
#include <QMessageBox>
#include "authentification.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMessageBox>
#include  <QDebug>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>
#include <QtSql/QSqlQueryModel>
#include<QtPrintSupport/QPrinter>
#include <QVector2D>
#include <QVector>
#include <QSqlQuery>
#include<QDesktopServices>
#include <QMessageBox>
#include<QUrl>
#include <QPixmap>
#include <QTabWidget>
#include <QValidator>
#include <QPrintDialog>
#include<QtSql/QSqlQuery>
#include<QVariant>

gest_emp_auth::gest_emp_auth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gest_emp_auth)
{
    ui->setupUi(this);
    ui->tab_employe->setModel(E.afficher());
    authentification A;
    ui->tableView_profil->setModel(A.afficher());

}

gest_emp_auth::~gest_emp_auth()
{
    delete ui;
}

void gest_emp_auth::on_pushButton_ajouteremploye_clicked()
{
    QMessageBox msgBox;
    int cin=ui->lineEdit_cin->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString email=ui->lineEdit_email->text();
    QString salaire=ui->lineEdit_salaire->text();
    QString datedn=ui->lineEdit_date->text();
    QString num=ui->lineEdit_numero->text();
    Employe E(cin,nom,prenom,email,salaire,datedn,num);
    bool test=E.ajouter();
    if (test){
        ui->tab_employe->setModel(E.afficher());
            msgBox.setText("Employe ajoute");
            msgBox.exec();
           }
        else
        {
            msgBox.setText("Cin existe deja");
            msgBox.exec();
        }
}

void gest_emp_auth::on_pushButton_supremploye_clicked()
{
    Employe E1;E1.setcin(ui->lineEdit_supcin->text().toInt());
    bool test=E1.supprimer(E1.getcin());
    if (test){
        ui->tab_employe->setModel(E.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                    QObject::tr("employe supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void gest_emp_auth::on_pushButton_modifieremploye_clicked()
{
        Employe E;
        QMessageBox msg;
        E.setcin(ui->lineEdit_cinm->text().toInt());
        E.setnom(ui->lineEdit_mnom->text());
        E.setprenom(ui->lineEdit_mprenom->text());
        E.setemail(ui->lineEdit_memail->text());
        E.setdatedn(ui->lineEdit_mdate->text());
        E.setnum(ui->lineEdit_mnumero->text());

        bool test=E.modifier(E.getcin());
        if(test)
        {
            msg.setText("modification avec succès");
            ui->tab_employe->setModel(E.afficher());
        }
        else
            msg.setText("echec de modification");

        msg.exec();
}


void gest_emp_auth::on_pushButton_tricin_clicked()
{
    QMessageBox msgBox ;

    QSqlQueryModel *model = new QSqlQueryModel();
             model->setQuery("SELECT * FROM EMPLOYE order by cin ASC");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
             model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
             ui->tab_employe->setModel(model);
             ui->tab_employe->show();
             msgBox.setText("Tri avec succès.");
             msgBox.exec();
}

void gest_emp_auth::on_pushButton_trinom_clicked()
{
    QMessageBox msgBox ;

    QSqlQueryModel *model = new QSqlQueryModel();
             model->setQuery("SELECT * FROM EMPLOYE order by nom ASC");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
             model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
             ui->tab_employe->setModel(model);
             ui->tab_employe->show();
             msgBox.setText("Tri avec succès.");
             msgBox.exec();
}

void gest_emp_auth::on_pushButton_trisalaire_clicked()
{
    QMessageBox msgBox ;

    QSqlQueryModel *model = new QSqlQueryModel();
             model->setQuery("SELECT * FROM EMPLOYE order by salaire ASC");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("salaire"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));
             model->setHeaderData(6, Qt::Horizontal, QObject::tr("datedn"));
             ui->tab_employe->setModel(model);
             ui->tab_employe->show();
             msgBox.setText("Tri avec succès.");
             msgBox.exec();
}


void gest_emp_auth::on_pushButton_rechercheremp_clicked()
{
    Employe E;
        if (ui->comboBox->currentText()=="cin")
        {
            int cin=ui->lineEdit_emprech->text().toInt();
            if (E.recherche_cin(cin))
            {
                ui->tab_employe->setModel(E.afficher_cin(cin));
            }
        }
        else if(ui->comboBox->currentText()=="nom")
        {
            QString nom=ui->lineEdit_emprech->text();
            if (E.recherche_nom(nom))
            {
                ui->tab_employe->setModel(E.afficher_nom(nom));
            }

        }
        else
        {
            QString salaire=ui->lineEdit_emprech->text();
            if(E.recherche_salaire(salaire))
            {
                ui->tab_employe->setModel(E.afficher_salaire(salaire));
            }
        }
}

void gest_emp_auth::on_pushButton_ajoutprofil_clicked()
{
    QMessageBox msgBox;
    int id=ui->lineEdit_id->text().toInt();
    QString nomutilisateur=ui->lineEditnometprenom->text();
    QString mdp=ui->lineEdit_mdp->text();
    authentification A(id,nomutilisateur,mdp);
    bool test=A.ajouter();
    if (test){
        ui->tableView_profil->setModel(A.afficher());
            msgBox.setText("Profil ajoute");
            msgBox.exec();
           }
        else
        {
            msgBox.setText("ID existe deja");
            msgBox.exec();

    }
}

void gest_emp_auth::on_pushButton_spradmin_clicked()
{
    authentification A1;A1.setid(ui->lineEdit_scin_admin->text().toInt());
    bool test=A1.supprimer(A1.getid());
    if (test){
        authentification A;
        ui->tableView_profil->setModel(A.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un admin"),
                    QObject::tr("admin supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
}
void gest_emp_auth::on_pushButton_modifierprofil_clicked()
{
    authentification A;
    QMessageBox msg;
    A.setid(ui->lineEdit_mid->text().toInt());
    A.setnomutilisateur(ui->mnom->text());
    A.setmdp(ui->lineEdit_mmdp->text());

    bool test=A.modifier(A.getid());
    if(test)
    {
        msg.setText("modification avec succès");
        ui->tableView_profil->setModel(A.afficher());
    }
    else
        msg.setText("echec de modification");

    msg.exec();
}

void gest_emp_auth::on_trinomprofil_clicked()
{
    QMessageBox msgBox ;

    QSqlQueryModel *model = new QSqlQueryModel();
             model->setQuery("SELECT * FROM PROFIL order by nom_utilisateur ASC");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_utilisateur"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("mot_de_passe"));
             ui->tableView_profil->setModel(model);
             ui->tableView_profil->show();
             msgBox.setText("Tri avec succès.");
             msgBox.exec();
}

void gest_emp_auth::on_triidprofil_clicked()
{
    QMessageBox msgBox ;

    QSqlQueryModel *model = new QSqlQueryModel();
             model->setQuery("SELECT * FROM PROFIL order by id ASC");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_utilisateur"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("mot_de_passe"));
             ui->tableView_profil->setModel(model);
             ui->tableView_profil->show();
             msgBox.setText("Tri avec succès.");
             msgBox.exec();
}

void gest_emp_auth::on_pushButton_2_clicked()
{
    close();
}

void gest_emp_auth::on_pushButton_imprimer_clicked()
{
    //imprimer

          QPrinter printer;

          printer.setPrinterName("desiered printer name");

        QPrintDialog dialog(&printer,this);

          if(dialog.exec()== QDialog::Rejected)

              return;
}

void gest_emp_auth::on_pushButton_pdf_clicked()
{
    QString strStream;
                  QTextStream out(&strStream);

                  const int rowCount = ui->tab_employe->model()->rowCount();
                  const int columnCount = ui->tab_employe->model()->columnCount();

                  out <<  "<html>\n"
                      "<head>\n"
                      "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                      <<  QString("<title>%1</title>\n").arg("strTitle")
                      <<  "</head>\n"
                      "<body bgcolor=#ffffff link=#5000A0>\n"

                     //     "<align='right'> " << datefich << "</align>"
                      "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                  // headers
                  out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                  for (int column = 0; column < columnCount; column++)
                      if (!ui->tab_employe->isColumnHidden(column))
                          out << QString("<th>%1</th>").arg(ui->tab_employe->model()->headerData(column, Qt::Horizontal).toString());
                  out << "</tr></thead>\n";

                  // data table
                  for (int row = 0; row < rowCount; row++) {
                      out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                      for (int column = 0; column < columnCount; column++) {
                          if (!ui->tab_employe->isColumnHidden(column)) {
                              QString data = ui->tab_employe->model()->data(ui->tab_employe->model()->index(row, column)).toString().simplified();
                              out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                          }
                      }
                      out << "</tr>\n";
                  }
                  out <<  "</table> </center>\n"
                      "</body>\n"
                      "</html>\n";

            QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
              if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

             QPrinter printer (QPrinter::PrinterResolution);
              printer.setOutputFormat(QPrinter::PdfFormat);
             printer.setPaperSize(QPrinter::A4);
            printer.setOutputFileName(fileName);

             QTextDocument doc;
              doc.setHtml(strStream);
              doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
              doc.print(&printer);
}

void gest_emp_auth::on_pushButton_imprimerprofil_clicked()
{
    //imprimer

          QPrinter printer;

          printer.setPrinterName("desiered printer name");

        QPrintDialog dialog(&printer,this);

          if(dialog.exec()== QDialog::Rejected)

              return;
}

void gest_emp_auth::on_pushButton_pdfprofil_clicked()
{
    QString strStream;
                     QTextStream out(&strStream);

                     const int rowCount = ui->tableView_profil->model()->rowCount();
                     const int columnCount = ui->tableView_profil->model()->columnCount();

                     out <<  "<html>\n"
                         "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                         <<  QString("<title>%1</title>\n").arg("strTitle")
                         <<  "</head>\n"
                         "<body bgcolor=#ffffff link=#5000A0>\n"

                        //     "<align='right'> " << datefich << "</align>"
                         "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                     // headers
                     out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                     for (int column = 0; column < columnCount; column++)
                         if (!ui->tableView_profil->isColumnHidden(column))
                             out << QString("<th>%1</th>").arg(ui->tableView_profil->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                     for (int row = 0; row < rowCount; row++) {
                         out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                         for (int column = 0; column < columnCount; column++) {
                             if (!ui->tableView_profil->isColumnHidden(column)) {
                                 QString data = ui->tableView_profil->model()->data(ui->tableView_profil->model()->index(row, column)).toString().simplified();
                                 out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                             }
                         }
                         out << "</tr>\n";
                     }
                     out <<  "</table> </center>\n"
                         "</body>\n"
                         "</html>\n";

               QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                 if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                QPrinter printer (QPrinter::PrinterResolution);
                 printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setPaperSize(QPrinter::A4);
               printer.setOutputFileName(fileName);

                QTextDocument doc;
                 doc.setHtml(strStream);
                 doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                 doc.print(&printer);
}

void gest_emp_auth::on_pushButton_rechprofil_clicked()
{
            authentification A;
            if (ui->comboBox_2->currentText()=="id")
            {
                int id=ui->lineEdit_profilrech->text().toInt();
                if (A.recherche_id(id))
                {
                    ui->tableView_profil->setModel(A.afficher_id(id));
                }
            }
            else if(ui->comboBox_2->currentText()=="nomutilisateur")
            {
                QString nomutilisateur=ui->lineEdit_profilrech->text();
                if (A.recherche_nom(nomutilisateur))
                {
                    ui->tableView_profil->setModel(A.afficher_nom(nomutilisateur));
                }
            }
}

void gest_emp_auth::on_recherchercin_clicked()
{
        Employe E;
        QSqlQuery query;
        int cin=ui->lineEdit_cinm->text().toInt();
        QString cin_string=QString::number(cin);
       if(E.recherche_cin(cin))
       {
           query.prepare("SELECT * FROM EMPLOYE WHERE cin like :cin");
           query.bindValue(0,cin_string);
           query.exec();
           while(query.next()){
           ui->lineEdit_mnom->setText(query.value(1).toString());
           ui->lineEdit_mprenom->setText(query.value(2).toString());
           ui->lineEdit_memail->setText(query.value(3).toString());
           ui->lineEdit_msalaire->setText(query.value(4).toString());
           ui->lineEdit_mnumero->setText(query.value(5).toString());
           ui->lineEdit_mdate->setText(query.value(6).toString());

        }
       }
}

void gest_emp_auth::on_rechercherid_clicked()
{
    authentification A;
    QSqlQuery query;
    int id=ui->lineEdit_mid->text().toInt();
    QString id_string=QString::number(id);
   if(A.recherche_id(id))
   {
       query.prepare("SELECT * FROM PROFIL WHERE id like :id");
       query.bindValue(0,id_string);
       query.exec();
       while(query.next()){
       ui->mnom->setText(query.value(1).toString());
       ui->lineEdit_mmdp->setText(query.value(2).toString());
    }
   }
}
