#include "menu.hpp"

void menu2(deposito * d){
	int op = 0;

	int a;
	float x, y;
	string alpha, beta, gama;
	char theta;
	
	cout<<"Selecione uma opção: "<<endl;
	cout<<"1 - Adicionar produto genérico."<<endl;
	cout<<"2 - Adicionar Produto Durável."<<endl;
	cout<<"3 - Adicionar Produto Não-Durável."<<endl;
	cout<<"4 - Adicionar Celulares."<<endl;
	cout<<"5 - Adicionar Carros."<<endl;
	cout<<"6 - Adicionar Livros."<<endl;
	cout<<"7 - Adicionar Pizzas."<<endl;
	cout<<"8 - Adicionar Refrigerantes."<<endl;
	cout<<"9 - Adicionar Chocolates."<<endl;
	cout<<"0 - Sair."<<endl;

	cout<<"Escolha: ";
	cin>>op;

	while(op != 0){

		switch(op){
			case 1:
				produto * p;
				p = new produto;
				cout<<"Informe os valores para nome, preço e descrição do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> x;
				cout << endl;
				cin>>beta;
				p->setNome(alpha);
				p->setPreco(x);
				p->setDescricao(beta);
				d->adicionarProduto(p);
				op = 0;
				break;
			case 2:
				produto_duravel * pd;
				pd = new produto_duravel;
				cout<<"Informe os valores para nome, Material predominante, preço e durabilidade do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> beta;
				cout <<endl;
				cin >> x;
				cout << endl;
				cin >> a;
				cout << endl;
				pd->setNome(alpha);
				pd->setMaterial_pred(beta);
				pd->setPreco(x);
				pd->setDurabilidade(a);
				d->adicionarProduto(pd);
				op = 0;
				break;
			case 3:
				produto_nao_duravel * pnd;
				pnd = new produto_nao_duravel;
				cout<<"Informe os valores para nome, Genero, preço e validade do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> beta;
				cout << endl;
				cin >> x;
				cout << endl;
				cin >> a;
				cout << endl;
				pnd->setNome(alpha);
				pnd->setGenero(beta);
				pnd->setPreco(x);
				pnd->setValidade(a);
				d->adicionarProduto(pnd);
				op = 0;
				break;
			case 4:
				celular * cel;
				cel = new celular;
				cout<<"Informe os valores para nome, polegadas e preço do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> x;
				cout << endl;
				cin >> y;
				cout << endl;
				cel->setNome(alpha);
				cel->setPolegadas(x);
				cel->setPreco(y);
				d->adicionarProduto(cel);
				op = 0;
				break;
			case 5:
				carro * car;
				car = new carro;
				cout<<"Informe os valores para nome, Placa, preço e tipo do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> beta;
				cout <<endl;
				cin >> x;
				cout << endl;
				cin >> gama;
				cout << endl;
				car->setNome(alpha);
				car->setPlaca(beta);
				car->setPreco(x);
				car->setTipo(gama);
				d->adicionarProduto(car);
				op = 0;
				break;
			case 6:
				livro * liv;
				liv = new livro;
				cout<<"Informe os valores para nome, Título, preço e quantidade de páginas do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> beta;
				cout << endl;
				cin >> x;
				cout << endl;
				cin >> a;
				cout << endl;
				liv->setNome(alpha);
				liv->setTitulo(beta);
				liv->setPreco(x);
				liv->setQtd_pag(a);
				d->adicionarProduto(liv);
				op = 0;
				break;
			case 7:
				pizza * piz;
				piz = new pizza;
				cout<<"Informe os valores para nome, Tamanho(P,M,G), preço e sabor do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> theta;
				cout << endl;
				cin >> x;
				cout << endl;
				cin >> beta;
				cout << endl;
				piz->setNome(alpha);
				piz->setTamanho(theta);
				piz->setPreco(x);
				piz->setSabor(beta);
				d->adicionarProduto(piz);
				op = 0;
				break;
			case 8:
				refrigerante * ref;
				ref = new refrigerante;
				cout<<"Informe os valores para nome, capacidade(em ml) e preço do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> a;
				cout << endl;
				cin >> x;
				cout << endl;
				ref->setNome(alpha);
				ref->setCapacidade(a);
				ref->setPreco(x);
				d->adicionarProduto(ref);
				op = 0;
				break;
			case 9:
				chocolate * choc;
				choc = new chocolate;
				cout<<"Informe os valores para nome, peso(em mg) e preço do produto em sequência: ";
				cin >> alpha;
				cout << endl;
				cin >> a;
				cout << endl;
				cin >> x;
				cout << endl;
				choc->setNome(alpha);
				choc->setPeso(a);
				choc->setPreco(x);
				d->adicionarProduto(choc);
				op = 0;
				break;
			case 0:
				op = 0;
				break;
		}
		
	}
}

void nome(deposito * d){
	int indice;
	cout << "Informe a posição em número ( 1 ..... n ): ";
	cin>>indice;
	cout << endl;

	d -> exibirNomeProduto(indice);
	cout << endl;
}

void lista(deposito * d){

	d -> exibirCatalogo();
}

void remocao(deposito * d){

	int indice;
	cout << "Informe a posição em número ( 1 ..... n ): ";
	cin>>indice;
	cout << endl;

	d -> removerProduto(indice);	

}

void qtd_estoque(deposito * d){

	d -> contarProduto();

}

void vazio(deposito * d){

	d -> isEmpty();

}

void caro(deposito * d){
	d -> maisCaro();
}

void menu(deposito * d){
	int op = 0;
	
	cout<<"Selecione uma opção: "<<endl;
	cout<<"1 - Adicionar produto."<<endl;
	cout<<"2 - Exibir nome do produto."<<endl;
	cout<<"3 - Exibir uma lista com os nomes dos produtos."<<endl;
	cout<<"4 - Remover um produto."<<endl;
	cout<<"5 - Exibir a quantidade de produtos no estoque."<<endl;
	cout<<"6 - Verificar se o estoque está vazio."<<endl;
	cout<<"7 - Verificar o produto mais caro em estoque."<<endl;
	cout<<"0 - Sair do programa."<<endl;

	cout<<"Escolha: ";
	cin>>op;
	while(op != 0){

		switch(op){
			case 1:
				menu2(d);
				op = 0;
				break;
			case 2:
				nome(d);
				op = 0;
				break;
			case 3:
				lista(d);
				op = 0;
				break;
			case 4:
				remocao(d);
				op = 0;
				break;
			case 5:
				qtd_estoque(d);
				op = 0;
				break;
			case 6:
				vazio(d);
				op = 0;
				break;
			case 7:
				caro(d);
				op = 0;
				break;
			case 0:
				op = 0;
				break;
		}

		cout<<"Deseja realizar outra operação? 1 = sim, 2 = não: ";
		cin>>op;

		if (op == 1)
		{
			menu(d);
		}
		
	}

}