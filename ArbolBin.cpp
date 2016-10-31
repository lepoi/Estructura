#include "ArbolBin.h"

template <class T>
ArbolBin<T>::ArbolBin(){
	root() = NULL;
}

template <class T>
NodoBin<T>*& ArbolBin<T>::root(){
	return raiz;
}

template <class T>
bool ArbolBin<T>::vacio() const {
	return (raiz == NULL);
}

template <class T>
void ArbolBin<T>::enorden(){
	if (root() == NULL)
		return;
	root()->i()->enorden();
	root()->imprimir();
	root()->d()->enorden();
}

template <class T>
void ArbolBin<T>::preorden(){
	if (root() == NULL)
		return;
	root()->imprimir();
	root()->i()->enorden();
	root()->d()->enorden();	
}

template <class T>
void ArbolBin<T>::postorden(){
	if (root() == NULL)
		return;
	root()->i()->enorden();
	root()->d()->enorden();
	root()->imprimir();
}