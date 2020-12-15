#include "Obstaculo.h"

Obstaculo::Obstaculo() 
{

}
// El obstaculo es el auto amarillo pero mas pequeño
Obstaculo::Obstaculo(int vel, int y0, int colorP) : Amarillo(vel,y0,colorP)
{
	colorPiedra = colorP;
	tempo = clock();
	puntajeObstaculo = 0;

	matriz[0][0] = 0; color[0][0] = colorPiedra;
	matriz[0][1] = 219; color[0][1] = colorPiedra;
	matriz[0][2] = 219; color[0][2] = colorPiedra;
	matriz[0][3] = 219; color[0][3] = colorPiedra;
	matriz[1][0] = 0; color[1][0] = colorPiedra;
	matriz[1][1] = 219; color[1][1] = colorPiedra;
	matriz[1][2] = 219; color[1][2] = colorPiedra;
	matriz[1][3] = 219; color[1][3] = colorPiedra;
	matriz[2][0] = 0; color[2][0] = colorPiedra;
	matriz[2][1] = 219; color[2][1] = colorPiedra;
	matriz[2][2] = 219; color[2][2] = colorPiedra;
	matriz[2][3] = 219; color[2][3] = colorPiedra;
	matriz[3][0] = 0; color[3][0] = colorPiedra;
	matriz[3][1] = 219; color[3][1] = colorPiedra;
	matriz[3][2] = 219; color[3][2] = colorPiedra;
	matriz[3][3] = 219; color[3][3] = colorPiedra;

	ancho = 4;
	alto = 4;
	x = 19 + rand() % (61-19);
	y = y0;
	dibujar();
	
}

void Obstaculo::actualizar() 
{
	if (tempo + velocidadA < clock()) 
	{
		borrar();
		y += 1;
		dibujar();
		tempo = clock();
		
		if (y == 30) 
		{
			puntajeObstaculo++;
			matriz[0][0] = 0; color[0][0] = colorPiedra;
			matriz[0][1] = 219; color[0][1] = colorPiedra;
			matriz[0][2] = 219; color[0][2] = colorPiedra;
			matriz[0][3] = 219; color[0][3] = colorPiedra;
			matriz[1][0] = 0; color[1][0] = colorPiedra;
			matriz[1][1] = 219; color[1][1] = colorPiedra;
			matriz[1][2] = 219; color[1][2] = colorPiedra;
			matriz[1][3] = 219; color[1][3] = colorPiedra;
			matriz[2][0] = 0; color[2][0] = colorPiedra;
			matriz[2][1] = 219; color[2][1] = colorPiedra;
			matriz[2][2] = 219; color[2][2] = colorPiedra;
			matriz[2][3] = 219; color[2][3] = colorPiedra;
			matriz[3][0] = 0; color[3][0] = colorPiedra;
			matriz[3][1] = 219; color[3][1] = colorPiedra;
			matriz[3][2] = 219; color[3][2] = colorPiedra;
			matriz[3][3] = 219; color[3][3] = colorPiedra;

			borrar();
			y = 10;
			x = 19 + rand() % (61-19);
		}
	}
}

int Obstaculo::getPuntos()
{
	return puntajeObstaculo;
}
