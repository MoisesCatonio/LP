#include "produto.hpp"

//Sessão Gets

string produto::getNome(){
	return Nome;
}

float produto::getPreco(){
	return Preco;
}

string produto::getMarca(){
	return Marca;
}

string produto::getDescricao(){
	return Descricao;
}

int produto::getData_fab(){
	return Data_fab;
}

//Sessão Sets

void produto::setNome(string nome){
	this->Nome = nome;
}

void produto::setPreco(float preco){
	this->Preco = preco;
}

void produto::setMarca(string marca){
	this->Marca = marca;
}

void produto::setDescricao(string descricao){
	this->Descricao = descricao;
}

void produto::setData_fab(int data_fab){
	this->Data_fab = data_fab;
}