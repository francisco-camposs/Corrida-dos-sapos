#include "Sapo.h"

using namespace std;

class corrida_sapo{
	private:
		Sapo *sapos;

	public:
		void set_add_sapos(int numero);
		void set_nomear_sapos(int numero = 3);
		void set_distancia_corrida(int numero = 10);
		void get_corrida_de_sapos(char *argv);
};

