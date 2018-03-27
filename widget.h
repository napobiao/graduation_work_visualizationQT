#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sort_window.h"
#include <QMainWindow>
#include <QDialog>
#include <QWidget>
#include <QPushButton>
class Widget :public QWidget
{
	Q_OBJECT
public:
	Widget(QWidget *parent = 0);
	~Widget();
	void open_sort();
	void open_disk();
	void sleep(unsigned int msec);
private:
	QPushButton *button_sort;
	QPushButton *button_stack;
	QPushButton *button_disk;
	QPushButton *button_exit;


	QMainWindow window;
};
























#endif
