#include "database.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    database w;
//    a.setQuitOnLastWindowClosed(false);
    return a.exec();
}
