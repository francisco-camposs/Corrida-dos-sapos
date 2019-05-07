#include "Corrida_Sapos.h" 

void corrida_sapo::add_sapos(string nome){
	sapos.resize(sapos.size()+1);
	sapos[sapos.size()-1].set_atribuir_identificador(nome);
}

void corrida_sapo::set_distancia_corrida(int numero){
	Sapo::distancia_total_da_corrida = numero;
}

void corrida_sapo::corrida_de_sapos(){
	// Aqui é onde realmente ocorre a corrida
	for (int i = 0; i < (int)sapos.size(); i++){
		sapos[i].get_Pular();
		if (sapos[i].get_distancia_percorrida() >= Sapo::distancia_total_da_corrida){
			cout << "O sapo Vencedor: " << sapos[i].get_nome_sapo() << "\n" << "Quantidade de pulos: " << sapos[i].get_numero_pulos() << "\n" << "Distancia Percorrida: " << sapos[i].get_distancia_percorrida() << endl;
			break;
		}
		if (i == (int)sapos.size() - 1)
			i = -1;
	}
}