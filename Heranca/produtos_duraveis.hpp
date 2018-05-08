#ifndef _produtos_duraveis_
#define _produtos_duraveis_

#include "produto_derivado.hpp"

//Classe que simula carros
class carro: public produto_duravel {
	
	private:
		string Placa;
		string Tipo;

	public:
		string getPlaca();
		void setPlaca(string padrao);
		string getTipo();
		void setTipo(string tipo);
	
};

//Classe que simula livros
class livro: public produto_duravel {

	private:
		string Titulo;
		int Qtd_pag;

	public:

		string getTitulo();
		void setTitulo(string titulo);
		int getQtd_pag();
		void setQtd_pag(int qtd_pag);
	
};

//Classe que simula celulares
class celular: public produto_duravel {
	
	private:
		float Polegadas;
	
	public:

		float getPolegadas();
		void setPolegadas(float polegadas);
	
};
#endif