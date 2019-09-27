#ifndef WINDOW_H
#define WINDOW_H
#include<QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QSpinBox>
class Window:public QWidget{
Q_OBJECT
	public:
		explicit Window(QWidget *parent=0);

	signals:
		public slots:
	private:
		QLabel* nameLabel;
		QLineEdit* nameLineEdit;
		QLabel* emailLabel;
		QLineEdit* emailLineEdit;
		QLabel* ageLabel;
		QSpinBox* ageSpinBox;


};
#endif // WINDOW_H

