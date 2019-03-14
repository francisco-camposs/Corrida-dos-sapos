#include <iostream>
#include <random>

using namespace std;

class Sapo{
	// Atributos privados da classe Sapo
	private:
		int identificador;
		int distancia_percorrida;
		int quantidade_de_pulos;

	// Atributos públicos da classe Sapo
	public:
		static int distancia_total_da_corrida;
	
	// Métodos da classe Sapo
	public:
		Sapo();
		//Print é utilizada para verificar se os valores estão corretos
		void get_Print();
		void set_atribuir_identificador (int i);
		int get_distancia_percorrida();
		int get_numero_pulos();
		void get_Pular();
};