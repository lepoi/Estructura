#include "NodoDoble.cpp"

class ListaDoble{
	public:
		ListaDoble();
		ListaDoble(NodoDoble &a);
		ListaDoble(NodoDoble *a);
		ListaDoble(ListaDoble &a);
		ListaDoble* operator+(ListaDoble *a);
		ListaDoble* operator-(ListaDoble *a);
		bool ordenada();
		void sort();
		int resultado(int &a);
		void imprimir();
		NodoDoble*& ini();
	private:
		NodoDoble *inicio;
};