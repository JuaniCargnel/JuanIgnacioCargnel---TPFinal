#ifndef JUGADOR_H
#define JUGADOR_H
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include <cstdio>
#include "Auto.h"

using namespace std;

class Jugador : public Auto 
{
	
public:

	Jugador();
	Jugador(int, int, int);
	void actualizar();
	int getVelocidad();

};

#endif
