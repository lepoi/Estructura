#include "Iterador.h"

template <class T>
Iterador<T>::Iterador(){}

template <class T>
Iterador<T>::Iterador(const Lista<T>*& a){
	this = a.ini();
}

template <class T>
Nodo<T> Iterador<T>::operator++(int){
	Nodo<T> *temp = this;
	this = this->sig();
	return temp;
}

template <class T>
Nodo<T> Iterador<T>::operator++(){
	Nodo<T> *temp = this;
	temp = temp->sig();
	this = temp;
	return temp;
}

template <class T>
bool Iterador<T>::operator!=(const Iterador<T>& a) const{
	if (this!=NULL && a=NULL) return true;
	return (info()==a->info() && sig()==a->sig());
}

template <class T>
T Iterador<T>::info(){
	return informacion;
}

template <class T>
Nodo<T>*& Iterador<T>::sig(){
	return siguiente;
}