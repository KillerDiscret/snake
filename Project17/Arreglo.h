#pragma once
#include"cuerpo.h"
class arreglo
{
private:
	cuerpo**ARR;
	int *N;
public:
	arreglo();
	void agregarCuerpo(cuerpo *obj);
	cuerpo*obtenerCuerpo(int indice);
	int get_N();
	~arreglo();
};
arreglo::arreglo()
{
	ARR = NULL;
	N = new int;
	*N =0 ;
}
void arreglo::agregarCuerpo(cuerpo *obj)
{
	cuerpo**temporal;
	temporal = new cuerpo*[*N + 1];
	if (temporal != NULL)
	{
		for (int i = 0; i<*N; i++)
		{
			temporal[i] = ARR[i];

		}
		temporal[*N] = obj;
		*N = *N + 1;
		ARR = temporal;
	}
}
cuerpo* arreglo::obtenerCuerpo(int indice)
{
	return ARR[indice];
}
int arreglo::get_N()
{
	return *N;
}
arreglo::~arreglo()
{

}