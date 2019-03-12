#include "Corrida_Sapos.h"

void corrida_sapo::set_add_sapos(int numero){
	sapos = new Sapo[numero];
}

void corrida_sapo::set_nomear_sapos(int numero){
	/*Atribui os identificadores dos sapos*/
	for (int i = 1; i <= numero; i++){
		sapos[i-1].set_atribuir_identificador(i);
	}
}

void corrida_sapo::set_distancia_corrida(int numero){
	Sapo::distancia_total_da_corrida = numero;
}

void corrida_sapo::get_corrida_de_sapos(){
	// Aqui é onde realmente ocorre a corrida
	for (int i = 0; i < 3; i++){
		sapos[i].get_Pular();
		if (sapos[i].set_distancia_percorrida() >= Sapo::distancia_total_da_corrida){
			cout << "O sapo Vencedor: " << i+1 << "\n" << "Quantidade de pulos: " << sapos[i].set_numero_pulos() << "\n" << "Distancia Percorrida: " << sapos[i].set_distancia_percorrida() << endl;
			break;
		}
		if (i == 2)
			i = -1;
	}
}