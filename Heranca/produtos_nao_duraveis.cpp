#include "produtos_nao_duraveis.hpp"

//Gets e Sets da classe Pizza
char pizza::getTamanho(){
	return Tamanho;
}

void pizza::setTamanho(char tamanho){
	this->Tamanho = tamanho;
}

string pizza::getSabor(){
	return Sabor;
}

void pizza::setSabor(string sabor){
	this->Sabor = sabor;
}

//Gets e Sets da classe Refrigerante
int refrigerante::getCapacidade(){
	return Capacidade;
}

void refrigerante::setCapacidade(int capacidade){
	this->Capacidade = capacidade;
}

//Gets e Sets da classe Chocolate
int chocolate::getPeso(){
	return Peso;
}

void chocolate::setPeso(int peso){
	this->Peso = peso;
}