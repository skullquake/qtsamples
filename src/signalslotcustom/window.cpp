#include"window.h"
#include<QApplication>
#include<QPushButton>
#include<QWidget>
#include<QLabel>
#include<QGridLayout>
#include<QString>
Window::Window(QWidget *parent):
	QWidget(parent)
{
	i=0;
	lblTest=new QLabel();
	btnTest=new QPushButton("Test");
	connect(btnTest, SIGNAL (clicked()), this, SLOT (slotTest()));
	btnDone=new QPushButton("Done");
	connect(btnDone, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
	QGridLayout *gridLayout = new QGridLayout;
	gridLayout->addWidget(lblTest, 0, 0);
	gridLayout->addWidget(btnTest, 1, 0);
	gridLayout->addWidget(btnDone, 1, 1);
	setLayout(gridLayout);
}
void Window::slotTest()
{
	lblTest->setText(QString::number(i++));
}
