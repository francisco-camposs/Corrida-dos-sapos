#include <iostream>
#include <random>
#include "Sapo.h"

using namespace std;

int main(int argc, char const *argv[])
{
	//Condicional para indicar se o programa foi chamado de forma correta
	if (argc<=4){
		cout << "Digite pelo dois valores inteiros: ./ex <distancia_total_da_corrida> <tamanho_pulo_sapo_1> <tamanho_pulo_sapo_2> <tamanho_pulo_sapo_3>" << endl;
		return 0;
	}
	/*Atribui o valor de argv[1], ou seja o primeiro valor que o usuario inseriu a distancia total da corrida*/
	Sapo::distancia_total_da_corrida = atoi(argv[1]);

	/*Atribui os identificadores dos sapos*/
	Sapo sapo[3];
	for (int i = 1; i < 4; i++){
		sapo[i-1].set_atribuir_identificador(i);
	}
	
	// Aqui é onde realmente ocorre a corrida
	for (int i = 0; i < 3; i++){
		sapo[i].get_Pular(atoi(argv[i+2]));
		if (sapo[i].set_distancia_percorrida() >= Sapo::distancia_total_da_corrida){
			cout << "O sapo Vencedor: " << i+1 << "\n" << "Quantidade de pulos: " << sapo[i].set_numero_pulos() << "\n" << "Distancia Percorrida: " << sapo[i].set_distancia_percorrida() << endl;
			break;
		}
		if (i == 2)
			i = -1;
	}
	return 0;
}