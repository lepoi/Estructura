#include "Nodo.h"

template <class T>
Nodo<T>::Nodo() {}

template <class T>
Nodo<T>::Nodo(T dato) {
	informacion = dato;
}

template <class T>
bool Nodo<T>:: operator==(const Nodo<T>& a) const{
	return (info() == a->info());
}

template <class T>
bool Nodo<T>:: operator!=(const Nodo<T>& a) const{
	return !(this == a);
}

template <class T>
T& Nodo<T>::info() {
	return informacion;
}

template <class T>
Nodo<T>*& Nodo<T>::sig() {
	return siguiente;
}