#include <QtGui/QApplication>
#include "knitti.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    knitti w;
    w.show();

    return a.exec();
}
