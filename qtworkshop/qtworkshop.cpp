#include "qtworkshop.h"
#include "ui_qtworkshop.h"

QtWorkshop::QtWorkshop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWorkshop)
{
    ui->setupUi(this);

    connect(this->ui->exitBtn, SIGNAL(clicked()),
                     this->ui->actionExit, SLOT(trigger()));

    connect(this->ui->actionExit, SIGNAL(triggered()),
            this, SLOT(close()));
}

QtWorkshop::~QtWorkshop()
{
    delete ui;
}
