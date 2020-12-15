#include "Rojo.h"

Rojo::Rojo()
{

}

Rojo::Rojo(int vel, int y0, int colorR) : Auto(vel,y0,colorR)
{
	colorRojo = colorR;
	velocidadR = vel;
	puntajeRojo = 0;
}


void Rojo::actualizar()
{
	if (tempo + velocidadR < clock()) 
	{
		borrar();
		y += 1;
		// El auto rojo se mueve aleatoriamente de 1 a 3 lugares
		x = x + rand() % (1-3);
		x = x - rand() % (1-3);
		tempo = clock();
		dibujar();
		// El auto rojo se borrara si golpea un borde antes de llegar al fondo
		if (y == 30 || x<23 || x>57) 
		{
			// El auto rojo solo sumara puntos si llega al fondo
			if(y == 30)
			{
				puntajeRojo++;
			}
			matriz[0][0] = 0;  color[0][0] = colorRojo;
			matriz[0][1] = 219; color[0][1] = colorRojo;
			matriz[0][2] = 0; color[0][2] = colorRojo;
			matriz[0][3] = 219; color[0][3] = colorRojo;
			matriz[1][0] = 0;  color[1][0] = colorRojo;
			matriz[1][1] = 205; color[1][1] = colorRojo;
			matriz[1][2] = 47; color[1][2] = colorRojo;
			matriz[1][3] = 205; color[1][3] = colorRojo;
			matriz[2][0] = 30; color[2][0] = colorRojo;
			matriz[2][1] = 205; color[2][1] = colorRojo;
			matriz[2][2] = 0;  color[2][2] = colorRojo;
			matriz[2][3] = 205; color[2][3] = colorRojo;
			matriz[3][0] = 0;  color[3][0] = colorRojo;
			matriz[3][1] = 205; color[3][1] = colorRojo;
			matriz[3][2] = 92; color[3][2] = colorRojo;
			matriz[3][3] = 205; color[3][3] = colorRojo;
			matriz[4][0] = 0;  color[4][0] = colorRojo;
			matriz[4][1] = 219; color[4][1] = colorRojo;
			matriz[4][2] = 0; color[4][2] = colorRojo;
			matriz[4][3] = 219; color[4][3] = colorRojo;

			borrar();

			y = 10;
			x = 19 + rand() % (61-19);
		}
	}
}
void Rojo::choque()
{
	bool chocar = true;

	if (chocar)
	{
		matriz[4][0] = 219;  color[4][0] = colorRojo;
		matriz[4][1] = 0; color[4][1] = colorRojo;
		matriz[4][2] = 219; color[4][2] = colorRojo;
		matriz[4][3] = 0; color[4][3] = colorRojo;
		matriz[3][0] = 205;  color[1][0] = colorRojo;
		matriz[3][1] = 47; color[1][1] = colorRojo;
		matriz[3][2] = 205; color[1][2] = colorRojo;
		matriz[3][3] = 0; color[1][3] = colorRojo;
		matriz[2][0] = 205; color[2][0] = colorRojo;
		matriz[2][1] = 0; color[2][1] = colorRojo;
		matriz[2][2] = 205;  color[2][2] = colorRojo;
		matriz[2][3] = 31; color[2][3] = colorRojo;
		matriz[1][0] = 205;  color[3][0] = colorRojo;
		matriz[1][1] = 92; color[3][1] = colorRojo;
		matriz[1][2] = 205; color[3][2] = colorRojo;
		matriz[1][3] = 0; color[3][3] = colorRojo;
		matriz[0][0] = 219;  color[0][0] = colorRojo;
		matriz[0][1] = 0; color[0][1] = colorRojo;
		matriz[0][2] = 219; color[0][2] = colorRojo;
		matriz[0][3] = 0; color[0][3] = colorRojo;
	}

	chocar = !chocar;
}
void Rojo::setVelocidad(int velocidad) 
{
	velocidadR = velocidad;
}

int Rojo::getPuntos()
{ 
	return puntajeRojo; 
}
