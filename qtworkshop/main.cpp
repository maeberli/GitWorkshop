#include "qtworkshop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWorkshop w;
    w.show();

    return a.exec();
}
