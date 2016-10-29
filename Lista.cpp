#include "Lista.h"

template <class T>
Lista<T>::Lista() {}

template <class T>
Lista<T>::~Lista() {
	destruirLista();
}

template <class T>
void Lista<T>::destruirLista() {
	Nodo<T> *temp;
	while (inicio != NULL) {
		temp = inicio;
		inicio = inicio->sig();
		delete temp;
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
	while (temp != NULL) {
		std::cout << c << ")   " << temp->info() << std::endl;
		temp = temp->sig();
		c++;
	}
}

template <class T>
int Lista<T>::totalNodos() const {
	Nodo<T> *temp = inicio;
	int c = 0;
	while (temp != NULL) {
		c++;
		temp = temp->sig();
	}
	return c;
}

template <class T>
bool Lista<T>::Buscar(const T& dato) const {
	Nodo<T> *temp = inicio;
	bool encontrado = false;
	while (temp != NULL && !encontrado ) {
		if (temp->info()==dato)
			encontrado = true;
		temp = temp->sig();
	}
	return encontrado;
}

template <class T>
void Lista<T>::insertarInicio(const T& dato) {
	Nodo<T> *nuevo;
	nuevo = new Nodo<T>(dato);
	nuevo->sig() = inicio;
	inicio = nuevo;
}

template <class T>
void Lista<T>::insertarFinal(const T& dato) {
	Nodo<T> *nuevo;
	nuevo = new Nodo<T>(dato);
	Nodo <T> *temp = inicio;
	while (temp->sig() != NULL){
		temp = temp->sig();
	}
	temp->sig() = nuevo;
}

template <class T>
void Lista<T>::eliminarNodo(const T& dato) {
	Nodo<T> *temp = inicio;
	while (temp->sig()->info() != dato){
		temp = temp->sig();
	}
	temp->sig() = temp->sig()->sig();
}

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
}