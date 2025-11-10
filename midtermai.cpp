#include "midtermai.h"
#include "ui_midtermai.h"

MidTermAI::MidTermAI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MidTermAI)
{
    ui->setupUi(this);
}

MidTermAI::~MidTermAI()
{
    delete ui;
}
