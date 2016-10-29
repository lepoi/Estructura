#include "NodoDoble.h"

NodoDoble::NodoDoble(){}
NodoDoble::NodoDoble(int &a){
	coeficiente = a;
	exponente = 0;
	siguiente = NULL;
	anterior = NULL;
}
NodoDoble::NodoDoble(int &a, int &b){
	coeficiente = a;
	exponente = b;
	siguiente = NULL;
	anterior = NULL;
}
NodoDoble::NodoDoble(NodoDoble &a){
	coeficiente = a.coeficiente;
	exponente = a.exponente;
	siguiente = a.siguiente;
	anterior = a.anterior;
}
bool NodoDoble::operator==(const NodoDoble &a){
	return (coeficiente==a.coeficiente && exponente==a.exponente);
}
bool NodoDoble::operator!=(const NodoDoble &a){
	return !(coeficiente==a.coeficiente && exponente==a.exponente);
}
int NodoDoble::value(int &a){
	return(coeficiente*pow(a,exponente));
}
int& NodoDoble::coef(){
	return coeficiente;
}
int& NodoDoble::expo(){
	return exponente;
}
NodoDoble*& NodoDoble::ant(){
	return anterior;
}
NodoDoble*& NodoDoble::sig(){
	return siguiente;
}