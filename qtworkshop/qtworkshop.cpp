#include "qtworkshop.h"
#include "ui_qtworkshop.h"

QtWorkshop::QtWorkshop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWorkshop)
{
    ui->setupUi(this);
}

QtWorkshop::~QtWorkshop()
{
    delete ui;
}
