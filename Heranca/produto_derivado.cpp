#include "produto_derivado.hpp"


//Sessão Produto Durável
string produto_duravel::getMaterial_pred(){
	return Material_pred;
}

int produto_duravel::getDurabilidade(){
	return Durabilidade;
}

void produto_duravel::setMaterial_pred(string material){
	this->Material_pred = material;
}

void produto_duravel::setDurabilidade(int tempo){
	this->Durabilidade = tempo;
}


//Sessão Produto Não Durável
string produto_nao_duravel::getGenero(){
	return Genero;
}

int produto_nao_duravel::getValidade(){
	return Validade;
}

void produto_nao_duravel::setGenero(string genero){
	this->Genero = genero;
}

void produto_nao_duravel::setValidade(int data){
	this->Validade = data;
}