#ifndef WINDOW_H
#define WINDOW_H
#include<QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QSpinBox>
#include<QPushButton>
class Window:public QWidget{
Q_OBJECT
	public:
		explicit Window(QWidget *parent=0);

	signals:
		public slots:
	private:
		QLabel* lblTest;
		QPushButton* btnTest;
		QPushButton* btnDone;
		int i;
	private slots:
		void slotTest();
};
#endif // WINDOW_H

