#ifndef WINDOW_H
#define WINDOW_H
#include<QWidget>
#include<QProgressBar>
#include<QSlider>
#include<QPushButton>
class Window:public QWidget{
Q_OBJECT
	public:
		explicit Window(QWidget *parent=0);

	signals:
		public slots:
	private:
		QProgressBar* progressBar;
		QSlider* slider;
		QPushButton* btnDone;
};
#endif // WINDOW_H

