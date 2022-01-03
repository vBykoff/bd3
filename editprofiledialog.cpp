#include "editprofiledialog.h"
#include "ui_editprofiledialog.h"

EditProfileDialog::EditProfileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProfileDialog)
{
    ui->setupUi(this);   
}

EditProfileDialog::~EditProfileDialog()
{
    delete ui;
}

QString EditProfileDialog::getNewLogin()
{
    return ui->loginLineEdit->text();
}

QString EditProfileDialog::getNewPassword()
{
    return ui->passwordLineEdit->text();
}

