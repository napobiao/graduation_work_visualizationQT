#include "widget.h"
#include <QApplication>
#include <QMenuBar>
#include <QWidget>
#include <QMainWindow>
#include <QStyleFactory>
#include "/home/chenhuanbiao/test_qt/sortDemo/inc/global.h"
#include "/home/chenhuanbiao/test_qt/sortDemo/inc/sortWidget.h"
#include <QPushButton>
#include <QDialog>
#include <QTime>
#include "/home/chenhuanbiao/test_qt/sort_window.h"
#include "DijkstraBellF/Window.h"
void Widget::sleep(unsigned int msec)
{
        QTime dieTime = QTime::currentTime().addMSecs(msec);
        while( QTime::currentTime() < dieTime )
                QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}



void Widget :: open_sort()
{
	window.setStyleSheet(BACKGROUND_COLOR);
	sortWidget widget(NUM_ELEMENTS, &window);
	widget.setFixedHeight(100 + RANGE);
	window.setCentralWidget(&widget);
	window.show();
	sleep(100000);
}

void Widget::open_disk()
{
	Window D_window;
	D_window.show();
	sleep(100000);
}



Widget :: Widget(QWidget *parent):QWidget(parent)
{
	setWindowTitle("基于Qt的算法可视化在线系统");
	adjustSize();
//	window.setStyleSheet(BACKGROUND_COLOR);
//	sortWidget widget(NUM_ELEMENTS, &window);
//	widget.setFixedHeight(100 + RANGE);
//	window.setCentralWidget(&widget);
//	window.show();
//	Sort_Window *sortopen = new Sort_Window(this);
	button_sort = new QPushButton(this);
	button_sort->setText("排序");
	button_sort->setObjectName("sort");
	button_sort->setGeometry(100,100,100,50);
	connect(button_sort,&QPushButton::clicked,this,&Widget::open_sort);
	button_sort->show();

	button_stack = new QPushButton(this);
	button_stack->setText("哈夫曼树");
	button_stack->setObjectName("stack");
	button_stack->setGeometry(100,200,100,50);
	button_stack->show();

	button_disk = new QPushButton(this);
	button_disk ->setText("最短路經算法");
	button_disk->setObjectName("disk");
	button_disk->setGeometry(100,300,100,50);
	connect(button_disk,&QPushButton::clicked,this,&Widget::open_disk);
	button_disk->show();

	button_exit = new QPushButton(this);
	button_exit->setText("退出");
	button_exit->setObjectName("exit");
	button_exit->setGeometry(100,600,50,25);
	connect(button_exit,&QPushButton::clicked,this,&Widget::close);
	button_exit->show();
}
Widget :: ~Widget()
{}
