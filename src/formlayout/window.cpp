#include"window.h"
#include<QPushButton>
#include<QWidget>
#include<QLabel>
#include<QFormLayout>
Window::Window(QWidget *parent):
	QWidget(parent)
{
	nameLineEdit=new QLineEdit();
	emailLineEdit=new QLineEdit();
	ageSpinBox=new QSpinBox();
	QFormLayout *formLayout = new QFormLayout;
	formLayout->addRow("Name:", nameLineEdit);
	formLayout->addRow("Email:", emailLineEdit);
	formLayout->addRow("Age:", ageSpinBox);
	setLayout(formLayout);
}
