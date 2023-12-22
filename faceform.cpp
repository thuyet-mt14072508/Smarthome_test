#include "faceform.h"
#include "ui_faceform.h"

faceForm::faceForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::faceForm)
{
    ui->setupUi(this);
}

faceForm::~faceForm()
{
    delete ui;
}
