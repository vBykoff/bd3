#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include "signin.h"
#include "editprofiledialog.h"
#include "createcollectivedialog.h"
#include "entercollectivedialog.h"

#include <QBoxLayout>
#include <QLineEdit>
#include <QListWidget>
#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTableView>
#include <QDebug>
#include <QStringListModel>
#include <QSettings>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentDialog; }
QT_END_NAMESPACE

struct StudentInfo
{
    QString login;
    QString password;
    int id;
    int teamId;
    QString name;
    QString surname;
    QString group;

    StudentInfo():
        login(""),
        password(""),
        id(0),
        teamId(0),
        name(""),
        surname(""),
        group("")
    {}
};


class StudentDialog : public QDialog
{
    Q_OBJECT

public:

    StudentDialog(QDialog *parent = nullptr, QSqlDatabase* p = nullptr);
    ~StudentDialog();

private slots:

    void editProfile();
    void addNewMember();
    void deleteMember();
    void deleteCollective();
    void exit();
    void createCollective();
    void enterCollective();
    void takeTask();
    void takeRandomTask();
    void acceptEntering();
    void declineEntering();

private:

    QSqlDatabase* m_db;
    Ui::StudentDialog* m_ui;
    QSettings* m_settings;
    StudentInfo m_info;

    void save_StudentInfo(const StudentInfo&);
    void load_StudentInfo(StudentInfo&);

    QWidget* createAcceptButtonWidget();
    QWidget* createDeclineButtonWidget();
    QSqlQueryModel* makeQuery(const QString& queryString);

//protected:

//    void changeEvent(QEvent* e) override;

};


#endif // STUDENTDIALOG_H
