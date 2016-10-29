#include "Lista.h"

template <class T>
Lista<T>::Lista() {}

template <class T>
Lista<T>::Lista(T& dato) {
	Nodo<T> *nuevo = new Nodo<T>(dato);
	inicio = nuevo;
	ini()->sig() = ini();
}

template <class T>
Lista<T>::~Lista() {
	destruirLista();
}

template <class T>
Nodo<T>* Lista<T>::ini() {
	return inicio;
}

template <class T>
void Lista<T>::destruirLista() {
	Nodo<T> *temp;
	while (ini() != NULL){
		temp = ini();
		while (temp->sig() != ini())
			temp = temp->sig();
		temp = NULL;
	}
}

template <class T>
void Lista<T>::inicializaLista() {
	destruirLista();
}

template <class T>
void Lista<T>::imprimirLista() {
	Nodo<T> *temp = inicio;
	int c = 0;
	if (totalNodos()>0){
		std::cout << c << ")   " << temp->info() << std::endl;
		temp = temp->sig();
		c++;
		while (temp != ini()) {
			std::cout << c << ")   " << temp->info() << std::endl;
			temp = temp->sig();
			c++;
		}
	}
}

template <class T>
int Lista<T>::totalNodos() {
	if (ini() != NULL){
		Nodo<T> *temp = inicio->sig();
		int c = 1;
		while (temp != ini()) {
			c++;
			temp = temp->sig();
		}
		return c;
	}
	return 0;
}

template <class T>
bool Lista<T>::Buscar(const T& dato) const {
	Nodo<T> *temp = inicio->sig();
	bool encontrado = false;
	while (temp != NULL && !encontrado && temp != inicio) {
		if (temp->info()==dato || temp->sig()->info()==dato)
			encontrado = true;
		temp = temp->sig();
	}
	return encontrado;
}

template <class T>
void Lista<T>::insertarInicio(T& dato) {
	Nodo<T> *nuevo;
	nuevo = new Nodo<T>(dato);
	nuevo->sig() = inicio;
	inicio = nuevo;
}

template <class T>
void Lista<T>::insertarFinal(T& dato) {
	Nodo<T> *nuevo;
	nuevo = new Nodo<T>(dato);
	Nodo <T> *temp = inicio;
	Nodo<T> *final;
	while (temp->sig() != ini()){
		temp = temp->sig();
	}
	final = temp;
	final->sig() = nuevo;
	nuevo->sig() = ini();
}

template <class T>
void Lista<T>::eliminarNodo(const T& dato) {
	Nodo<T> *temp = inicio;
	Nodo<T> *final;
	while (temp->sig() != ini()){
		temp = temp->sig();
	}
	final = temp;
	temp = ini();
	if (ini()->info()==dato){
		final->sig()=ini()->sig();
		inicio = ini()->sig();
	}
	while (temp->sig()->info()!=dato && temp!=ini()){
		temp = temp->sig();
	}
	temp->sig() = temp->sig()->sig();
}
/*
template <class T>
Lista<T> merge(Lista<T>& a, Lista<T>& b) {

	Nodo<T> *A = a->ini();
	Nodo<T> *B = b->ini();

	if (A == NULL)
		return b;
	if (B == NULL)
		return a;

	Lista<T> nuevalista = new Lista<T>;

	while (A != NULL || B != NULL) {
		if (B == NULL || A < B) {
			nuevalista.insertarInicio(A->informacion());
			A = A->siguiente;
		}
		else if (A == NULL || A > B) {
			nuevalista.insertarInicio(B->informacion());
			B = B->siguiente;
		}
	}
	return nuevalista;
}

template <class T>
Nodo<T> Lista<T>::ini(){
	return inicio;
}*/