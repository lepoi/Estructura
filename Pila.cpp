#include "Pila.h"

template<class T>
Pila<T>::Pila(){
	tope = NULL;
}

template<class T>
Pila<T>::~Pila(){
	delete this;
}

template<class T>
void Pila<T>::inicializa(){
	tope = new Nodo<T>();
}

template<class T>
void Pila<T>::push(T dato){
	Nodo<T> *nuevo = new Nodo<T>();
	nuevo->info() = dato;
	nuevo->sig() = tope;
	tope = nuevo;
}

template<class T>
bool Pila<T>::operator==(const Pila<T>& x) {
	Nodo<T> *temp1=tope, *temp2=x.tope;
	if (temp1==NULL & temp2==NULL) return true;
	while (temp1!=NULL && temp2!=NULL){
		if (temp1->info() == temp2->info()){
			temp1 = temp1->sig();
			temp2 = temp2->sig();
		}
		else
			return false;
	}
	return true;
}

template<class T>
T Pila<T>::top() {
	return tope->info();
}

template<class T>
Nodo<T>*& Pila<T>::topNodo(){
	return tope;
}

template<class T>
T Pila<T>::pop(){
	T x;
	if (!pilaVacia()) {
		Nodo<T> *temp;
		temp = tope;
		tope = tope->sig();
		x = temp->info();
		delete temp;
		return x;
	}
}

template<class T>
bool Pila<T>::pilaVacia() { //SEGMENTATION FAULT (CORE DUMPED)
	return (tope == NULL);
}

template <class T>
int Pila<T>::datos(){
	Nodo<T> *temp = tope;
	int c = 0;
	while (!pilaVacia()){
		temp = temp->sig();
		c++;
	}
	return c;
}

template <class T>
void Pila<T>::imprimir(){
	if (pilaVacia()){
		std::cout << "<LISTA VACIA>";
		return;
	}
	Nodo<T> *temp = topNodo();
	while (temp!=NULL){
		std::cout << temp->info() << std::endl;
		temp = temp->sig();
	}
	return;
}

template <class T>
bool Pila<T>::find(T dato){
	Nodo<T> *temp = topNodo();
	while (temp != NULL){
		if (temp->info() == dato){
			std::cout << "Encontrado \n";
			return true;
		}
		temp = temp->sig();
	}
	return false;
}