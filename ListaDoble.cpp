#include "ListaDoble.h"

ListaDoble::ListaDoble(){}	
ListaDoble::ListaDoble(NodoDoble &a){
	inicio = &a;
}
ListaDoble::ListaDoble(NodoDoble *a){
	inicio = a;
}
ListaDoble::ListaDoble(ListaDoble &a){
	inicio = a.inicio;
}
ListaDoble* ListaDoble::operator+(ListaDoble *a){
	ListaDoble *nueva = new ListaDoble();
	nueva->ini() = new NodoDoble(ini()->coef(),ini()->expo());
	NodoDoble *temp=ini()->sig(), *tempnueva=nueva->ini()->sig();
	while (temp!=NULL){
		tempnueva = new NodoDoble(temp->coef(),temp->expo());
		tempnueva = tempnueva->sig();
		temp = temp->sig();
	}
	temp = a->ini();
	while (temp!=NULL){
		tempnueva = new NodoDoble(temp->coef(),temp->expo());
		tempnueva = tempnueva->sig();
		temp = temp->sig();
	}
	nueva->sort();
	return nueva;

}
ListaDoble* ListaDoble::operator-(ListaDoble *a){
	ListaDoble *nueva = new ListaDoble();
	ini()->coef() *= -1;
	nueva->ini() = new NodoDoble(ini()->coef(),ini()->expo());
	ini()->coef() *= -1;
	NodoDoble *temp=ini()->sig(), *tempnueva=nueva->ini()->sig();
	while (temp!=NULL){
		temp->coef() *= -1;
		tempnueva = new NodoDoble(temp->coef(),temp->expo());
		temp->coef() *= -1;
		tempnueva = tempnueva->sig();
		temp = temp->sig();
	}
	temp = a->ini();
	while (temp!=NULL){
		temp->coef() *= -1;
		tempnueva = new NodoDoble(temp->coef(),temp->expo());
		temp->coef() *= -1;
		tempnueva = tempnueva->sig();
		temp = temp->sig();
	}
	nueva->sort();
	return nueva;

}
void ListaDoble::sort(){
	if(ini()==NULL)
		return;
	NodoDoble *temp, *temp2=ini(), *max=ini();
	while (!ordenada()){
		temp = temp2;
		while (temp!=NULL){
			if (temp->expo() > max->expo())
				max = temp;
			else if (temp->expo() == max->expo()){
				max->coef() += temp->coef();
				temp->ant()->sig() = temp->sig();
				temp->sig()->ant() = temp->ant();
			}
			temp = temp->sig();
		}
		temp2 = temp2->sig();
	}
}
bool ListaDoble::ordenada(){
	NodoDoble *temp = ini();
	while (temp!=NULL && temp->sig()!=NULL){
		if (temp->sig()->expo() > temp->expo())
			return false;
		temp = temp->sig();
	}
	return true;
}
int ListaDoble::resultado(int &a){
	if (ini()==NULL)
		return 0;
	int sum = 0;
	NodoDoble *temp = ini();
	while (temp!=NULL){
		sum += pow(temp->coef()*a,temp->expo());
	}
	return sum;
}
void ListaDoble::imprimir(){
	int x = 1;
	NodoDoble *temp = ini();
	while (temp!=NULL){
		std::cout << "Nodo " << x << std::endl << "coeficiente: " << temp->coef() << std::endl << "exponente: " << temp->expo() << std::endl;
		temp = temp->sig();
		x++;
	}
}
NodoDoble*& ListaDoble::ini(){
	return inicio;
}
int main(){
	int x, y;
	ListaDoble a;
	std::cout << "Ingrese el numero de nodos: ";
	std::cin >> x;
	if (x < 1){
		std::cout << "SU LISTA ESTA VACIA";
		return 0;
	}
	NodoDoble poi, *temp;
	a.ini() = &poi;
	temp = a.ini();
	std::cout << std::endl << "Nodo 1: " << std::endl << "coeficiente: ";
	std::cin >> y;
	temp->coef() = y;
	std::cout << "exponente: ";
	std::cin >> y;
	temp->expo() = y;
	for (int i=2; i<=x; i++){
		temp->sig() = new NodoDoble();
		temp = temp->sig();
		std::cout << std::endl << "Nodo " << i << ": " << std::endl << "coeficiente: ";
		std::cin >> y;
		temp->coef() = y;
		std::cout << "exponente: ";
		std::cin >> y;
		temp->expo() = y;
	}
	std::cout << std::endl;
	a.imprimir();
	if (a.ordenada())
		std::cout << "Esta ordenada" << std::endl;
	else{
		std::cout << "No esta ordenada" << std::endl;
		a.sort();
		std::cout << "operatordenada: " << std::endl;
		a.imprimir();
	}
	/*while (temp!=NULL){
		std::cout << "coeficiente: " << temp->coef() << std::endl << "exponente: " << temp->expo() << std::endl;
		temp = temp->sig();
	}*/
	return 0;
}