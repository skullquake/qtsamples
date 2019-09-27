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

	progressBar = new QProgressBar(this);
	progressBar->setRange(0, 100);
	progressBar->setValue(0);
	progressBar->setGeometry(10, 10, 180, 30);
	slider = new QSlider(this);
	slider->setOrientation(Qt::Horizontal);
	slider->setRange(0, 100);
	slider->setValue(0);
	slider->setGeometry(10, 40, 180, 30);
	QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));


	btnDone=new QPushButton("Done");
	connect(btnDone, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
	QFormLayout *formLayout = new QFormLayout;
	formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
	formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
	formLayout->setFormAlignment(Qt::AlignHCenter | Qt::AlignTop);
	formLayout->setLabelAlignment(Qt::AlignLeft);
	formLayout->addRow("Slider:", slider);
	formLayout->addRow("Progressbar:", progressBar);
	formLayout->addRow(btnDone);
	setLayout(formLayout);
}
