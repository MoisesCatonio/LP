#ifndef _deposito_
#define _deposito_

#include <iostream>
using namespace std;

#include <typeinfo>
#include <string>
#include <vector>

#include "produtos_duraveis.hpp"
#include "produtos_nao_duraveis.hpp"

class deposito {
	private:
		vector<produto *> produtos; 	
	public:
		void adicionarProduto(produto * elemento);
		void exibirNomeProduto(int indice);
		void exibirCatalogo();
		void removerProduto(int indice);
		void contarProduto();
		void isEmpty();
		void maisCaro();
};

#endif