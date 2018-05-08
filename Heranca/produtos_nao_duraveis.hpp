#ifndef _produtos_nao_duraveis_
#define _produtos_nao_duraveis_

#include "produto_derivado.hpp"

//Classe que simula Pizzas
//<3
class pizza: public produto_nao_duravel {
	
	private:
		char Tamanho;
		string Sabor;

	public:
		char getTamanho();
		void setTamanho(char tamanho);
		string getSabor();
		void setSabor(string sabor);
	
};

//Classe que simula Refrigerantes
//</3
class refrigerante: public produto_nao_duravel {

	private:
		int Capacidade;

	public:
		int getCapacidade();
		void setCapacidade(int capacidade);
	
};

//Classe que simula Chocolates
// <3 <3 <3
class chocolate: public produto_nao_duravel {
	
	private:
		int Peso;
	
	public:
		int getPeso();
		void setPeso(int peso);
	
};
#endif