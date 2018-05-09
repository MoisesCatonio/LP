#include "produtos_duraveis.hpp"

//Gets e Sets da classe Carro
string carro::getPlaca(){
	return Placa;
}

void carro::setPlaca(string padrao){
	this->Placa = padrao;
}

string carro::getTipo(){
	return Tipo;
}

void carro::setTipo(string tipo){
	this->Tipo = tipo;
}

//Gets e Sets da classe Livro
string livro::getTitulo(){
	return Titulo;
}

void livro::setTitulo(string titulo){
	this->Titulo = titulo;
}

int livro::getQtd_pag(){
	return Qtd_pag;
}

void livro::setQtd_pag(int qtd_pag){
	this->Qtd_pag = qtd_pag;
}

//Gets e Sets da classe Celular
float celular::getPolegadas(){
	return Polegadas;
}

void celular::setPolegadas(float polegadas){
	this->Polegadas = polegadas;
}
