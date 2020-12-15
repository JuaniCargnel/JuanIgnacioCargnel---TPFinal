#include "Juego.h"

Juego::Juego()
{
	// Genera las clases 
	jugador = new Jugador(2.5, 30, 10);
	amarillo = new Amarillo(200, 10, 14);
	rojo = new Rojo(180, 10, 12);
	obstaculo = new Obstaculo(200, 10, 8);
	
	puntajeTotal = 0;
	nivel = 0;
}
// Menu principal donde se explica el juego
void Juego::menu()
{
	system("cls");
	textcolor(10);
	cout << endl << endl;
	cout << "				STREET RACER ATARI              ";
	cout << endl << endl;
	textcolor(15);
	cout << "				  INSTRUCCIONES                ";
	cout << endl << endl;
	cout << "  Utilice las teclas de direccion "; 
	textcolor(10); 
	cout << "IZQUIERDA"; 
	textcolor(15);
	cout << ",";
	textcolor(10);
	cout << "DERECHA";
	textcolor(15);
	cout << ",";
	textcolor(10);
	cout << "ARRIBA";
	textcolor(15);
	cout << " y ";
	textcolor(10);
	cout << "ABAJO";
	textcolor(15);
	cout << " para moverte";
	cout << endl << endl;
	cout << " 		Esquiva los ";
	textcolor(10);
	cout << "AUTOS"; 
	textcolor(15);
	cout << " y ";
	textcolor(10);
	cout << "OBSTACULOS";
	textcolor(15);
	cout << " para ganar puntos ";
	textcolor(8);
	cout << endl << endl << endl << endl;
	cout << "              PRESIONE LA FLECHA IZQUIERDA O DERECHA PARA COMENZAR ";
	getch();
	system("cls");
}
// Se dibujan los limites del juego
void Juego::carretera()
{
	textcolor(8);
	for (int i = 10; i <= 40; i++)
	{
		gotoxy(17, i);
		cout << "||";
		gotoxy(66, i);
		cout << "||";
	}
}
// Se crea un bucle hasta que el jugador pierda
void Juego::play() 
{
	menu();
	carretera();
	gameover = true;
	
	while (gameover)
	{
		niveles();
		jugador->actualizar();
		amarillo->actualizar();
		rojo->actualizar();
		obstaculo->actualizar();

		if (checkCollision() == 2) 
		{
			amarillo->choque();
			amarillo->dibujar();
			pantallaFinal(1);
		}

		if (checkCollision() == 3)
		{
			rojo->choque();
			rojo->dibujar();
			pantallaFinal(1);
		}

		if (checkCollision() == 4)
		{
			obstaculo->choque();
			pantallaFinal(1);
		}
		// Se muestra en pantalla el puntaje y el nivel
		if(gameover)
		{
			puntajeTotal = amarillo->getPuntos() + rojo->getPuntos() + obstaculo->getPuntos();
			gotoxy(5, 18);
			textcolor(15);
			cout << "PUNTAJE: " << puntajeTotal;
			gotoxy(5, 21);
			cout << "NIVEL: " << nivel;
		}
	}
}
// Se crean niveles cada 20 puntos hasta un maximo de 200
void Juego::niveles()
{
	switch (puntajeTotal) 
	{
		case 20: case 21: case 22:
			
			amarillo->setVelocidad(180);
			rojo->setVelocidad(160);
			obstaculo->setVelocidad(190);
			nivel = 1;
			break;
			
		case 40: case 41: case 42:
			
			amarillo->setVelocidad(160);
			rojo->setVelocidad(140);
			obstaculo->setVelocidad(180);
			nivel = 2;
			break;
			
		case 60: case 61: case 62:
			
			amarillo->setVelocidad(140);
			rojo->setVelocidad(120);
			obstaculo->setVelocidad(170);
			nivel = 3;
			break;
			
		case 80: case 81: case 82:
			
			amarillo->setVelocidad(120);
			rojo->setVelocidad(100);
			obstaculo->setVelocidad(160);
			nivel = 4;
			break;
			
		case 100: case 101: case 102:
		
			amarillo->setVelocidad(100);
			rojo->setVelocidad(80);
			obstaculo->setVelocidad(150);
			nivel = 5;
			break;
			
		case 120: case 121: case 122:
			
			amarillo->setVelocidad(80);
			rojo->setVelocidad(60);
			obstaculo->setVelocidad(140);
			nivel = 6;
			break;
			
		case 140: case 141: case 142:
			
			amarillo->setVelocidad(60);
			rojo->setVelocidad(40);
			obstaculo->setVelocidad(130);
			nivel = 7;
			break;
			
		case 160: case 161: case 162:
			
			amarillo->setVelocidad(40);
			rojo->setVelocidad(20);
			obstaculo->setVelocidad(120);
			nivel = 8;
			break;
			
		case 180: case 181: case 182:
			
			amarillo->setVelocidad(20);
			rojo->setVelocidad(10);
			obstaculo->setVelocidad(110);
			nivel = 9;
			break;
// Velocidad maxima de los autos, se mantiene hasta que el jugador pierde			
		case 200: case 201: case 202:
			
			amarillo->setVelocidad(10);
			rojo->setVelocidad(10);
			obstaculo->setVelocidad(100);
			nivel = 10;
			break;
	}
}
// Chequea si el jugador colisiono con los autos/obstaculo
int Juego::checkCollision() 
{
	int x1 = jugador->getX();
	int y1 = jugador->getY();
	int x2 = amarillo->getX();
	int y2 = amarillo->getY();
	int x3 = rojo->getX();
	int y3 = rojo->getY();
	int x4 = obstaculo->getX();
	int y4 = obstaculo->getY();
	
	if (x1 > (x2 - 4) && x1<(x2 + 4) && y1>(y2 - 5) && y1 < (y2 + 5)) 
	{
		return 2;
	}
	
	if (x1 > (x3 - 4) && x1<(x3 + 4) && y1>(y3 - 5) && y1 < (y3 + 5)) 
	{
		return 3;
	}
	
	if (x1 > (x4 - 4) && x1<(x4 + 4) && y1>(y4 - 5) && y1 < (y4 + 5))
	{
		return 4;
	}
	
	return 0;
}
// Pantalla de gameover, se muestra puntaje maximo
void Juego::pantallaFinal(int choque)
{
	if (choque == 1)
	{
		gameover = false;
		textcolor(12);
		system("cls");
		cout << endl << endl;
		cout << " PERDISTE! MAS SUERTE LA PROXIMA! ";
		cout << endl << endl;
		cout << " PUNTAJE MAXIMO: ";
		textcolor(15);
		cout << puntajeTotal;
		cout << endl;
		
	}
}
