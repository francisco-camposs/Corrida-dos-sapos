#include "Sapo.h"

using namespace std;

int Sapo::distancia_total_da_corrida = 0;

// Método construtor
Sapo::Sapo () { 
	identificador = 0;
	distancia_percorrida = 0;
	quantidade_de_pulos = 0;
}

//Método Pular é o responsável por gerar o pulo do sapo
void Sapo::get_Pular (){
	random_device rd;
	default_random_engine gen(rd());
	uniform_int_distribution<> dis(1, 10);
	distancia_percorrida += dis(gen);
	quantidade_de_pulos += 1;
}

// Método parra atribuir o identificador de cada sapo
void Sapo::set_atribuir_identificador (int i){
	identificador = i;
}

//Método para imprimir os valores
void Sapo::get_Print(){
	cout << identificador << " " << distancia_percorrida << " " << quantidade_de_pulos << " " << endl;
}

//Método para poder retornar a distancia percorrida
int Sapo::get_distancia_percorrida(){
	return distancia_percorrida;
}

// Método para retornar a quantidade de pulos
int Sapo::get_numero_pulos(){
	return quantidade_de_pulos;
}