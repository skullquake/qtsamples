#include"window.h"
#include<QPushButton>
#include<QWidget>
#include<QLabel>
#include<QFormLayout>
#include<QApplication>
#include<QPushButton>
Window::Window(QWidget *parent):
	QWidget(parent)
{
	nameLineEdit=new QLineEdit();
	emailLineEdit=new QLineEdit();
	ageSpinBox=new QSpinBox();
	btnDone=new QPushButton("Done");
	connect(btnDone, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
	QFormLayout *formLayout = new QFormLayout;
	formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
	formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
	formLayout->setFormAlignment(Qt::AlignHCenter | Qt::AlignTop);
	formLayout->setLabelAlignment(Qt::AlignLeft);
	formLayout->addRow("Name:", nameLineEdit);
	formLayout->addRow("Email:", emailLineEdit);
	formLayout->addRow("Age:", ageSpinBox);
	formLayout->addRow(btnDone);
	setLayout(formLayout);
}
#include "window.h"
