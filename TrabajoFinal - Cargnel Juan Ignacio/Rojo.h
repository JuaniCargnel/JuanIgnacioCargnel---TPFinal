#ifndef ROJO_H
#define ROJO_H
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto.h"

using namespace std;

class Rojo : public Auto
{

private:

	int colorRojo;
	int velocidadR;
	int puntajeRojo;

public:

	Rojo();
	Rojo(int, int, int);
	int getPuntos();
	void actualizar();
	void choque();
	void setVelocidad(int);

};

#endif

