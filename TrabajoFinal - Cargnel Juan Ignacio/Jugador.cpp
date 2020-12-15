#include "Jugador.h"

Jugador::Jugador(int vel, int y0, int colorJ) : Auto(vel,y0,colorJ)
{
	
}

Jugador::Jugador() 
{

}

void Jugador::actualizar()
{
	if (kbhit()) 
	{
		int movimiento = getch();
		bool accion = false;

		switch (movimiento)
		{
		case (72):  // Flecha direccional superior
		{
			if (y >= 11) 
			{
				borrar();
				y = y - getVelocidad();
				accion = true;
			}
			break;
			
		}
		case (80): // Flecha direccional inferior
		{ 
			if (y <= 29) 
			{
				borrar();
				y = y + getVelocidad();
				accion = true;
			}
			break;
			
		}
		case (77): // Flecha direccional derecha
			if (x <= 59.5) 
			{
				borrar();
				x = x + getVelocidad();
				accion = true;
			}
			break;
		case (75): // Flecha direccional izquierda
			if (x >= 20.5)
			{
				borrar();
				x = x - getVelocidad();
				accion = true;
			}
			break;
		}
		// Dibuja si el jugador se mueve
		if (accion) 
		{
			dibujar();
		}
	}
}

int Jugador::getVelocidad() 
{
	return velocidad; 
}
