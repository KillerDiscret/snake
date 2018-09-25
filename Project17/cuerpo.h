#pragma once
#include"cabeza.h"
class cuerpo:public cabeza
{
private:
	int posx,posy;
	int X, Y;
	int DIREC;
	int *N;
public:
	cuerpo(int x, int y,int direccion);
	void posicion(int indice);
	void borrar();
	void mover(int tecla);
	void imprimir();
	~cuerpo();

};
cuerpo::cuerpo(int x, int y,int direccion):cabeza(x,y,direccion)
{
	X = x;
	Y = y;
	N = new int;
	*N = 0;
	*N = *N - 1;
	DIREC = direccion;
	if (direccion ==0 )
	{
		posx = x + *N;
		posy = y;
	}
	if (direccion == 1)
	{
		posx = x;
		posy = y+*N;
	}
	if (direccion == 2)
	{
		posx = x + (*N *-1);
		posy = y;
	}
	if (direccion == 3)
	{
		posx = x;
		posy = y+(*N *-1);
	}
}
void cuerpo::posicion(int indice)
{

	*N = *N - indice;
	if (DIREC == 0)
	{
		posx = posx + *N;
		posy = posy;
	}
	if (DIREC == 1)
	{
		posx = posx;
		posy = posy + *N;
	}
	if (DIREC == 2)
	{
		posx = posx + (*N *-1);
		posy = posy;
	}
	if (DIREC == 3)
	{
		posx = posx;
		posy = posy + (*N *-1);
	}

}
void cuerpo::borrar()
{
	Console::SetCursorPosition(posx,posy);
	cout << " ";
}
void cuerpo::mover(int tecla)
{
	int *tamaño;
	tamaño = new int;
	*tamaño = -1;
	int *aux;
	aux = new int[1000];

	if (tecla ==derecha )
	{
		DIREC = 0;
		*tamaño++;
		aux[*tamaño] = X;
	}
	if (DIREC==0)
	{
		if (posx < aux[*tamaño])
		{
			posx++;
		}
	}
	if (tecla ==abajo )
	{
		DIREC = 1;
		*tamaño++;
		aux[*tamaño] = Y;
	}
	if (DIREC == 1)
	{
		if (posy < aux[*tamaño])
		{
			posy++;
		}
	}
	if (tecla == izquierda)
	{
		DIREC = 2;
		*tamaño++;
		aux[*tamaño] = X;
	}
	if (DIREC == 2)
	{
		if (aux[*tamaño] < posx)
		{
			posx--;
		}
	}
	if (tecla == arriba)
	{
		DIREC = 3;
		*tamaño++;
		aux[*tamaño] = Y;
	}
	if (DIREC == 3)
	{
		if (aux[*tamaño] < posy)
		{
			posy--;
		}
	}
}
void cuerpo::imprimir()
{
	Console::SetCursorPosition(posx, posy);
	cout << char(220);
}
cuerpo::~cuerpo()
{

}
