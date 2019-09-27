#include"window.h"
#include<QPushButton>
#include<QWidget>
#include<QLabel>
#include<QGridLayout>
Window::Window(QWidget *parent):
	QWidget(parent)
{
	nameLineEdit=new QLineEdit();
	emailLineEdit=new QLineEdit();
	ageSpinBox=new QSpinBox();

	nameLabel = new QLabel("Name:");
	nameLabel->setBuddy(nameLineEdit);

	emailLabel = new QLabel("Email:");
	emailLabel->setBuddy(emailLineEdit);

	ageLabel = new QLabel("Age:");
	ageLabel->setBuddy(ageSpinBox);

	QGridLayout *gridLayout = new QGridLayout;
	gridLayout->addWidget(nameLabel, 0, 0);
	gridLayout->addWidget(nameLineEdit, 0, 1);
	gridLayout->addWidget(emailLabel, 1, 0);
	gridLayout->addWidget(emailLineEdit, 1, 1);
	gridLayout->addWidget(ageLabel, 2, 0);
	gridLayout->addWidget(ageSpinBox, 2, 1);
	setLayout(gridLayout);
}
