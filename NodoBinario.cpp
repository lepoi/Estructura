#include "NodoBinario.h"

template <class T>
NodoBin<T>::NodoBin(){}

template <class T>
NodoBin<T>::NodoBin(T dato){
	info() =dato;
}

template <class T>
NodoBin<T>::NodoBin(T dato, NodoBin<T> *izq, NodoBin<T> *der){
	info() = dato;
	i() = izq;
	d() = der;
}

template <class T>
void NodoBin<T>::enorden(){
	if (this == NULL)
		return;
	i()->enorden();
	imprimir();
	d()->enorden();
}

template <class T>
void NodoBin<T>::preorden(){
	if (this == NULL)
		return;
	imprimir();
	i()->enorden();
	d()->enorden();	
}

template <class T>
void NodoBin<T>::postorden(){
	if (this == NULL)
		return;
	i()->enorden();
	d()->enorden();
	imprimir();
}

template <class T>
T& NodoBin<T>::info(){
	return informacion;
}

template <class T>
NodoBin<T>*& NodoBin<T>::i(){
	return izquierdo;
}

template <class T>
NodoBin<T>*& NodoBin<T>::d(){
	return derecho;
}

template <class T>
void NodoBin<T>::imprimir(){
	cout << info() << endl;
}