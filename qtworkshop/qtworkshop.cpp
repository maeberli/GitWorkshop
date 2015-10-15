#include "qtworkshop.h"
#include "ui_qtworkshop.h"

#include <QMessageBox>

QStringList QtWorkshop::m_contributorList = QList<QString>()
        << QString("Marco Aeberli")
        << QString("Stéphane Beurret");


QtWorkshop::QtWorkshop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWorkshop)
{
    ui->setupUi(this);

    connect(this->ui->exitBtn, SIGNAL(clicked()),
                     this->ui->actionExit, SLOT(trigger()));

    connect(this->ui->actionExit, SIGNAL(triggered()),
            this, SLOT(close()));
    connect(this->ui->actionAbout, SIGNAL(triggered()),
            this, SLOT(showAboutDialog()));

    // update lcd when dial slider moves
    connect(this->ui->dial, SIGNAL(sliderMoved(int)),
            this, SLOT(updateLCD(int)));

    colorize(this->ui->exitBtn);
}

QtWorkshop::~QtWorkshop()
{
    delete ui;
}

void QtWorkshop::showAboutDialog()
{
    QString aboutText = tr("This application was implemented for a Git workshop") + "\n" + "\n"
            + tr("Version: 1.0") + "\n" + "\n"
            + tr("Contributors:") + "\n-"
            + m_contributorList.join(",\n-");

    QMessageBox::about(this, tr("Git workshop application"), aboutText);
}

void QtWorkshop::updateLCD(int newValue)
{
    // yes this is the unimplemented function. just uncomment the line below.
    //this->ui->lcdNumber->display(newValue);
}

void QtWorkshop::colorize(QPushButton *button)
{
    QPalette pal = button->palette();
    pal.setBrush(QPalette::Button, QBrush(Qt::blue));

    button->setAutoFillBackground(true);
    button->setPalette(pal);
    button->update();
}
