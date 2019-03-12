#include "Sapo.h"

void Sapo::set_add_sapos(int numero){
	sapos = new Sapo[numero];
}

void Sapo::set_nomear_sapos(int numero = 3){
	/*Atribui os identificadores dos sapos*/
	for (int i = 1; i <= numero; i++){
		sapos[i-1].set_atribuir_identificador(i);
	}
}

void Sapo::set_distancia_corrida(int numero = 10){
	Sapo::distancia_total_da_corrida = numero;
}

void Sapo::get_corrida_de_sapos(char *argv){
	// Aqui é onde realmente ocorre a corrida
	for (int i = 0; i < 3; i++){
		sapos[i].get_Pular(atoi(argv[i+2]));
		if (sapos[i].set_distancia_percorrida() >= Sapo::distancia_total_da_corrida){
			cout << "O sapo Vencedor: " << i+1 << "\n" << "Quantidade de pulos: " << sapos[i].set_numero_pulos() << "\n" << "Distancia Percorrida: " << sapos[i].set_distancia_percorrida() << endl;
			break;
		}
		if (i == 2)
			i = -1;
	}
}