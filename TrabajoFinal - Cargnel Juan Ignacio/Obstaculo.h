#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Amarillo.h"

using namespace std;

class Obstaculo : public Amarillo
{

private:
	
	int colorPiedra;
	int puntajeObstaculo;
	
public:

	Obstaculo();
	Obstaculo(int, int, int);
	void actualizar();
	int getPuntos();

};

#endif

