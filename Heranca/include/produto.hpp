#ifndef _produto_
#define _produto_
#include <iostream>
#include <string>

using namespace std;

class produto{

	protected:
		string Nome;
		float Preco;
		string Marca;
		string Descricao;
		int Data_fab;

	public:

		string getNome();
		float getPreco();
		string getMarca();
		string getDescricao();
		int getData_fab();


		void setNome(string nome);
		void setPreco(float preco);
		void setMarca(string marca);
		void setDescricao(string descricao);
		void setData_fab(int data_fab);
	
};

#endif  