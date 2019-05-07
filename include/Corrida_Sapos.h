#include "Sapo.h"
#include <vector>

using namespace std;

class corrida_sapo{
	private:
		vector<Sapo> sapos;

	public:
		void add_sapos(string nome);
		void set_distancia_corrida(int numero);
		void corrida_de_sapos();
};

