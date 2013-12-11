/*
 * main.cpp
 *
 *  Created on: 10 d�c. 2013
 *      Author: tuan
 */


#include<iostream>
#include<string>
#include<QtGui/QtGui>

#include<QtGui/QApplication>
#include<QtCore/QtCore>
#include "MyWindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	MyWindow w;
	w.show();   //Exécution de notre fenêtre de rendu OpenGL
	return app.exec();
}
