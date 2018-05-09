#include "deposito.hpp"

int main(){
	
	produto * p = new celular;
	celular * c = (celular*)p;

	livro * l = new livro;

	c -> setNome("HUAWEIHIA");
	cout<< c -> getNome();
	cout << endl;

	l -> setNome("As tranças do rei careca");
	cout<< l -> getNome();
	cout << endl;

	deposito * d = new deposito; 

	d->adicionarProduto(c);
	d->adicionarProduto(l);
	cout << endl;
	d->contarProduto();
	d->isEmpty();
	d->exibirCatalogo();
	return 0;
}