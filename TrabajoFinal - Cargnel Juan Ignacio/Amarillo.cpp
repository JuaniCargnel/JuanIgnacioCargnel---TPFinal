#include "Amarillo.h"

Amarillo::Amarillo()
{

}

Amarillo::Amarillo(int vel, int y0, int colorAm) : Auto(vel,y0,colorAm)
{
	x = 19 + rand() % (61-19);
	velocidadA = vel;
	colorAmarillo = colorAm;
	puntajeAmarillo = 0;
}

void Amarillo::actualizar()
{
	if (tempo + velocidadA < clock())
	{
		borrar();
		y += 1;
		dibujar();
		tempo = clock();
		
		if (y == 30) 
		{
			puntajeAmarillo++;
			
			matriz[0][0] = 0;  color[0][0] = colorAmarillo;
			matriz[0][1] = 219; color[0][1] = colorAmarillo;
			matriz[0][2] = 0; color[0][2] = colorAmarillo;
			matriz[0][3] = 219; color[0][3] = colorAmarillo;
			matriz[1][0] = 0;  color[1][0] = colorAmarillo;
			matriz[1][1] = 205; color[1][1] = colorAmarillo;
			matriz[1][2] = 47; color[1][2] = colorAmarillo;
			matriz[1][3] = 205; color[1][3] = colorAmarillo;
			matriz[2][0] = 30; color[2][0] = colorAmarillo;
			matriz[2][1] = 205; color[2][1] = colorAmarillo;
			matriz[2][2] = 0;  color[2][2] = colorAmarillo;
			matriz[2][3] = 205; color[2][3] = colorAmarillo;
			matriz[3][0] = 0;  color[3][0] = colorAmarillo;
			matriz[3][1] = 205; color[3][1] = colorAmarillo;
			matriz[3][2] = 92; color[3][2] = colorAmarillo;
			matriz[3][3] = 205; color[3][3] = colorAmarillo;
			matriz[4][0] = 0;  color[4][0] = colorAmarillo;
			matriz[4][1] = 219; color[4][1] = colorAmarillo;
			matriz[4][2] = 0; color[4][2] = colorAmarillo;
			matriz[4][3] = 219; color[4][3] = colorAmarillo;

			borrar();

			y = 10;
			x = 19 + rand() % (61-19);
			dibujar();
		}
	}
}

void Amarillo::choque() 
{
	bool chocar = true;

	if (chocar) 
	{
		matriz[4][0] = 219;  color[4][0] = colorAmarillo;
		matriz[4][1] = 0; color[4][1] = colorAmarillo;
		matriz[4][2] = 219; color[4][2] = colorAmarillo;
		matriz[4][3] = 0; color[4][3] = colorAmarillo;
		matriz[3][0] = 205;  color[1][0] = colorAmarillo;
		matriz[3][1] = 47; color[1][1] = colorAmarillo;
		matriz[3][2] = 205; color[1][2] = colorAmarillo;
		matriz[3][3] = 0; color[1][3] = colorAmarillo;
		matriz[2][0] = 205; color[2][0] = colorAmarillo;
		matriz[2][1] = 0; color[2][1] = colorAmarillo;
		matriz[2][2] = 205;  color[2][2] = colorAmarillo;
		matriz[2][3] = 31; color[2][3] = colorAmarillo;
		matriz[1][0] = 205;  color[3][0] = colorAmarillo;
		matriz[1][1] = 92; color[3][1] = colorAmarillo;
		matriz[1][2] = 205; color[3][2] = colorAmarillo;
		matriz[1][3] = 0; color[3][3] = colorAmarillo;
		matriz[0][0] = 219;  color[0][0] = colorAmarillo;
		matriz[0][1] = 0; color[0][1] = colorAmarillo;
		matriz[0][2] = 219; color[0][2] = colorAmarillo;
		matriz[0][3] = 0; color[0][3] = colorAmarillo;
	}
	chocar = !chocar;
}

void Amarillo::setVelocidad(int velocidad)
{
	velocidadA = velocidad;
}

int Amarillo::getPuntos()
{ 
	return puntajeAmarillo; 
}
