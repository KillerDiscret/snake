#pragma once
#include <iostream>
#include <conio.h>
#include<Windows.h>
#define arriba 72
#define abajo 80
#define derecha 77
#define izquierda 75
using namespace std;
using namespace System;
class cabeza
{
protected:
	int x, y;
	int direccion;
public:
	cabeza(int X, int Y, int DIRECCION);
	cabeza(int DIRECCION);
	void set_x(int X);
	void set_y(int Y);
	int get_x();
	int get_y();
	void borrar();
	void mover(int tecla);
	void imprimir();
	~cabeza();

};
cabeza::cabeza(int DIRECCION)
{
	direccion = DIRECCION;
}
cabeza::cabeza(int X, int Y, int DIRECCION)
{
	x = X;
	y = Y;
	direccion = DIRECCION;
}
void cabeza::set_x(int X)
{
	x = X;
}
void cabeza::set_y(int Y)
{
	y = Y;
}
int cabeza::get_x()
{
	return x;
}
int cabeza::get_y()
{
	return y;
}
void cabeza::borrar()
{
	Console::SetCursorPosition(x,y);
	cout << " ";
}
void cabeza::mover(int tecla)
{
	if (tecla==derecha)
	{
		direccion = 0;
	}
	if (tecla ==abajo )
	{
		direccion = 1;
	}
	if (tecla ==izquierda )
	{
		direccion = 2;
	}
	if (tecla ==arriba )
	{
		direccion = 3;
	}
	if (direccion ==0 )
	{
		x++;
	}
	if (direccion ==1 )
	{
		y++;
	}
	if (direccion ==2 )
	{
		x--;
	}
	if (direccion ==3 )
	{
		y--;
	}
}
void cabeza::imprimir()
{
	Console::SetCursorPosition(x,y);
	cout << char(2);
}
cabeza::~cabeza()
{

}