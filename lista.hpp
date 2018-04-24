#include <iostream>

using namespace std;

template<>

class Lista<int>{
	private:
		int elemento;
	public:
		int getElemento();
		void setElemento();
};

int Lista<int>::getElemento(){
	return elemento;
}

class Lista<float>{
	private:
		float elemento;
	public:
		float getElemento();
		void setElemento();
};

int Lista<float>::getElemento(){
	return elemento;
}

class Lista<double>{
	private:
		double elemento;
	public:
		double getElemento();
		void setElemento();
};

int Lista<double>::getElemento(){
	return elemento;
}