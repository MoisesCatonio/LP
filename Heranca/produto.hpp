#ifndef _produto_
#define _produto_
#include <iostream>
#include <string>

using namespace std;

class produto
{

	protected:
		string nome;
		float preco;
		string marca;
		string descricao;
		int data_fab;

	public:
		produto();
		~produto();
	
};


class produto_duravel{
	private:
		string material_pred;
		int durabilidade;
	public:
		produto_duravel();
		~produto_duravel();

};

class produto_nao_duravel{
	private:
		string genero;
		int validade;
	public:
		produto_nao_duravel();
		~produto_nao_duravel();

};

#endif  