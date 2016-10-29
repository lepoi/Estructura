#include <iostream>
#include <cstddef>
#include <tgmath.h>

class NodoDoble{
	public:
		NodoDoble();
		NodoDoble(int &a);
		NodoDoble(int &a,int &b);
		NodoDoble(NodoDoble &a);
		bool operator!=(const NodoDoble &a);
		bool operator==(const NodoDoble &a);
		int value(int &a);
		int& coef();
		int& expo();
		NodoDoble*& ant();
		NodoDoble*& sig();
	private:	
		int coeficiente;
		int exponente;
		NodoDoble *anterior;
		NodoDoble *siguiente;
};