#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <conio2.h>
#include <climits>
#include <ctime>
#include "Auto.h"
#include "Jugador.h"
#include "Rojo.h"
#include "Amarillo.h"
#include "Obstaculo.h"

class Juego 
{
private: 
	
	Jugador *jugador;
	Amarillo *amarillo;
	Rojo *rojo;
	Obstaculo *obstaculo;
	bool gameover;
	int puntajeTotal;
	int nivel;

public:

	Juego();
	int checkCollision();
	void play();
	void niveles();
	void carretera();
	void menu();
	void pantallaFinal(int);

};

#endif
