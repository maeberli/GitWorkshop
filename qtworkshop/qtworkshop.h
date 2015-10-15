#ifndef QTWORKSHOP_H
#define QTWORKSHOP_H

#include <QMainWindow>
#include <QStringList>
#include <QPushButton>

namespace Ui {
class QtWorkshop;
}

class QtWorkshop : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtWorkshop(QWidget *parent = 0);
    ~QtWorkshop();

private slots:
    void showAboutDialog();
    void updateLCD(int newValue);

private:
    Ui::QtWorkshop *ui;

    static QStringList m_contributorList;


    void colorize(QPushButton *button);
};

#endif // QTWORKSHOP_H
