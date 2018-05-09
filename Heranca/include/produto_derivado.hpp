#ifndef _produto_derivado_
#define _produto_derivado_

#include "produto.hpp"

//Classe representativa dos produtos duráveis
class produto_duravel : public produto{
	
	protected:
		string Material_pred;
		int Durabilidade;
	
	public:
		string getMaterial_pred();
		int getDurabilidade();
		void setMaterial_pred(string material);
		void setDurabilidade(int tempo);

};

//Classe representativa dos produtos não duráveis
class produto_nao_duravel: public produto{
	
	protected:
	
		string Genero;
		int Validade;
	
	public:
	
		string getGenero();
		int getValidade();
		void setGenero(string genero);
		void setValidade(int data);

};

#endif