#include "NodoBinario.h"

template <class T>
NodoBinario<T>::NodoBinario(T dato){}

template <class T>
NodoBinario<T>::NodoBinario(T dato, NodoBinario<T> *izq, NodoBinario<T> *der){
	info() = dato;
	i() = izq;
	d() = der;
}

template <class T>
T& NodoBinario<T>::info(){
	return &informacion;
}

template <class T>
NodoBinario<T>*& NodoBinario<T>::i(){
	return izquierdo;
}

template <class T>
NodoBinario<T>*& NodoBinario<T>::d(){
	return derecho;
}

template <class T>
void NodoBinario<T>::imprimir(){
	cout << info();
}