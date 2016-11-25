#include "boggle.h"
#include "ui_boggle.h"

Boggle::Boggle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Boggle)
{
    ui->setupUi(this);
}

Boggle::~Boggle()
{
    delete ui;
}
