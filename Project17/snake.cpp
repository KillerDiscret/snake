#include "cabeza.h"
#include "cuerpo.h"
#include "Arreglo.h"
int main()
{
	char tecla;
	cabeza *objcabeza;
	cuerpo *objcuerpo;
	arreglo*objarreglo;
	objcabeza = new cabeza(5, 1, 0);
	objcuerpo = new cuerpo(5, 1, 0);
	objarreglo = new arreglo();


	while (1)
	{
		if (_kbhit())
		{
			tecla = _getch();
			
			
			if ((int)tecla==derecha)
			{
				objcabeza->borrar();
				objcabeza->mover((int)tecla);
				objcabeza->imprimir();
				objcuerpo->borrar();
				objcuerpo->mover((int)tecla);
				objcuerpo->imprimir();
			}
			if ((int)tecla == abajo)
			{
				objcabeza->borrar();
				objcabeza->mover((int)tecla);
				objcabeza->imprimir();
				objcuerpo->borrar();
				objcuerpo->mover((int)tecla);
				objcuerpo->imprimir();
			}
			if ((int)tecla == izquierda)
			{
				objcabeza->borrar();
				objcabeza->mover((int)tecla);
				objcabeza->imprimir();
				objcuerpo->borrar();
				objcuerpo->mover((int)tecla);
				objcuerpo->imprimir();
			}
			if ((int)tecla == arriba)
			{
				objcabeza->borrar();
				objcabeza->mover((int)tecla);
				objcabeza->imprimir();
				objcuerpo->borrar();
				objcuerpo->mover((int)tecla);
				objcuerpo->imprimir();
			}
		}
		_sleep(100);
	}
	_getch();
}
