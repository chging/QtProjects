#include "QChannelTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QChannelTest w;
	w.show();
	return a.exec();
}
