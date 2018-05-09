#include "deposito.hpp"

void deposito::adicionarProduto(produto * elemento){

	produtos.push_back(elemento);

}

void deposito::exibirNomeProduto(int indice){
	string nome;
	nome = produtos[indice-1]->getNome();
	cout << nome;
}

void deposito::exibirCatalogo(){
	for(int i = 0; i < (int)produtos.size(); i++){
		auto x = produtos[i]->getNome();
		cout<<x;
		cout<<endl;
	}
}

void deposito::removerProduto(int indice){
	produtos.erase(produtos.begin()+(indice-1));
}

void deposito::contarProduto(){
	int qtd = (int) produtos.size();
	cout << "O depósito possui: " << qtd << " produtos." << endl; 
}

void deposito::isEmpty(){
	bool vazio = produtos.empty();
	if(vazio == 1){
		cout << "O depósito está vazio!" << endl;
	} else {
		cout << "O depósito não está vazio!" << endl;
	}
}

void deposito::maisCaro(){
	int indice = 0;
	for(int i = 0; i < (int) produtos.size()-1; i++){
		if (produtos[i]->getPreco() < produtos[i+1]->getPreco())
		{
			indice = i+1;
		} else {
			indice = i;
		}
	}

	cout<<"O produto mais caro é: " << produtos[indice]->getNome() << endl;

}