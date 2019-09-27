#include<QApplication>
#include<QStyleFactory>
#include<QDebug>
#include"window.h"
int main(int argc,char **argv)
{
	qDebug()<<QStyleFactory::keys()<<endl;
	QApplication app(argc,argv);
	app.setStyle(QStyleFactory::create("Fusion"));
	Window window;
	window.show();
	return app.exec();
}
