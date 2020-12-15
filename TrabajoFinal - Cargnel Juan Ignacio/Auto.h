#ifndef AUTO_H
#define AUTO_H
#include <ctime>
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include <cstdio>

using namespace std;

class Auto {

protected:

	int x;
	int y;
	int matriz[5][4];
	int color[5][4];
	int ancho;
	int alto;
	int velocidad;
	int colorAuto;
	bool choque;
	clock_t tempo;

public:

	Auto();
	Auto(int,int,int);
	void borrar();
	void dibujar();
	virtual void actualizar();
	int getX();
	int getY();

};

#endif

