#include "widget.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QMainWindow>
#include <QStyleFactory>
#include "/home/chenhuanbiao/test_qt/sortDemo/inc/global.h"

#include "/home/chenhuanbiao/test_qt/sortDemo/inc/sortWidget.h"

int main(int argc,char *argv[])
{
	QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
	QApplication a(argc, argv);
	a.setStyle(QStyleFactory::create("Fusion"));

//	MainWindow wid;
	//QApplication a(argc,argv);
	Widget w;
	w.show();

	return a.exec();
}
