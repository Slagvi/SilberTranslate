#include "SilberTranslate.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SilberTranslate w;
	w.show();
	return a.exec();
}
