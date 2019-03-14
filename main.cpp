#include <iostream>
#include "Corrida_Sapos.h"

using namespace std;

int main()
{
	corrida_sapo Run;
	Run.add_sapos();
	Run.set_distancia_corrida(20);
	Run.corrida_de_sapos();
	return 0;
}