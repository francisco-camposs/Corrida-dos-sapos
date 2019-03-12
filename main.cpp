#include <iostream>
#include "Corrida_Sapos.h"

using namespace std;

int main(void)
{
	int numero_sapos = 10;
	corrida_sapo Run;
	Run.set_add_sapos(numero_sapos);
	Run.set_nomear_sapos(numero_sapos);
	Run.set_distancia_corrida(1100);
	Run.get_corrida_de_sapos();
	return 0;
}