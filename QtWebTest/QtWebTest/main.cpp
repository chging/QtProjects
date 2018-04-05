#include "QtWebTest.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QtWebTest w;
    w.show();
    return a.exec();
}
