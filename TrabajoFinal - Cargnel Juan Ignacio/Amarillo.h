#ifndef AMARILLO_H
#define AMARILLO_H
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto.h"

using namespace std;

class Amarillo : public Auto
{

protected:

	int colorAmarillo;
	int velocidadA;
	int puntajeAmarillo;

public:

	Amarillo();
	Amarillo(int, int, int);
	int getPuntos();
	void actualizar();
	void choque();
	void setVelocidad(int);

};

#endif
