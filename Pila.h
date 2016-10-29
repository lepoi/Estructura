#include "Nodo.cpp"

template <class T>
class Pila{
	public:
		Pila();
		~Pila();
		void inicializa();
		void push(T dato);
		bool operator==(const Pila<T>& x);
		T top();
		T pop();
		Nodo<T>*& topNodo();
		bool pilaVacia();
		int datos();
		void imprimir();

		//Actividad de pancakes

		Nodo<T>* encontrarFlip();
		void flip(int);
		void flipSort();
		bool find(T dato);
		bool ordenada();
		//bool pilaLlena()const;
	private:
		Nodo<T> *tope;
};