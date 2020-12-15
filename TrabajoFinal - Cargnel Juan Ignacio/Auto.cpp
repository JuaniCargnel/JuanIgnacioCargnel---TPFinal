#include "Auto.h"

Auto::Auto()
{

}

Auto::Auto(int vel, int y0, int colorA)
{
	// Color de cada auto 
	colorAuto = colorA; 
	// Velocidad en la que se mueven los autos
	velocidad = vel;
	// Se inicia tempo con el reloj
	tempo = clock(); 

	matriz[0][0] = 0;  color[0][0] = colorAuto;
	matriz[0][1] = 219; color[0][1] = colorAuto;
	matriz[0][2] = 0; color[0][2] = colorAuto;
	matriz[0][3] = 219; color[0][3] = colorAuto;
	matriz[1][0] = 0;  color[1][0] = colorAuto;
	matriz[1][1] = 205; color[1][1] = colorAuto;
	matriz[1][2] = 47; color[1][2] = colorAuto;
	matriz[1][3] = 205; color[1][3] = colorAuto;
	matriz[2][0] = 30; color[2][0] = colorAuto;
	matriz[2][1] = 205; color[2][1] = colorAuto;
	matriz[2][2] = 0;  color[2][2] = colorAuto;
	matriz[2][3] = 205; color[2][3] = colorAuto;
	matriz[3][0] = 0;  color[3][0] = colorAuto;
	matriz[3][1] = 205; color[3][1] = colorAuto;
	matriz[3][2] = 92; color[3][2] = colorAuto;
	matriz[3][3] = 205; color[3][3] = colorAuto;
	matriz[4][0] = 0;  color[4][0] = colorAuto;
	matriz[4][1] = 219; color[4][1] = colorAuto;
	matriz[4][2] = 0; color[4][2] = colorAuto;
	matriz[4][3] = 219; color[4][3] = colorAuto;
	// Se define la medida de los autos
	ancho = 5;
	alto = 4;
	// Se define donde comienza el jugador
	x = 40;
	y = y0;

	dibujar();

}
// Dibuja los autos cuando es llamado
void Auto::dibujar()
{
	for (int i = 0; i < ancho; i++)
	{
		for (int k = 0; k < alto; k++)
		{
			textcolor(color[i][k]);
			gotoxy(x + i, y + k);
			cout << (char)matriz[i][k];
		}
	}
}
// Borra los autos cuando es llamado
void Auto::borrar() 
{
	for (int i = 0; i < ancho; i++) 
	{
		for (int k = 0; k < alto; k++)
		{
			textcolor(color[i][k]);
			gotoxy(x + i, y + k);
			cout << ' ';
		}
	}
}

int	Auto::getX() 
{
	return x; 
}

int Auto::getY() 
{
	return y; 
}

void Auto::actualizar()
{
	
}
