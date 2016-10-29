#include "Pila.cpp"

template<class T>
Nodo<T>* Pila<T>::encontrarFlip(){
	Nodo<T> *temp1=topNodo(), *temp2=top->sig(), *max;
	if (ordenadaAsc)
		return NULL;
	if (ordenadaDesc){
		while (temp1->sig()!=NULL){
			temp1 = temp1->sig();
		}
		return temp1;
	}
	while (temp1->info() <= temp2->info()){
		temp1 = temp1->sig();
		temp2 = temps2->sig();
	}

}//FALTA

template<class T>
bool Pila<T>::ordenadaAsc(){
	if (pilaVacia())
		return true;
	Nodo<T> *temp = topNodo();
	while (temp!=NULL){
		if (temp->info() > temp->sig()->info())
			return false;
		temp = temp->sig();
	}
	delete temp;
	return true;
}//listo

template<class T>
bool Pila<T>::ordenadaDesc(){
	if (pilaVacia())
		return true;
	Nodo<T> *temp = topNodo();
	while (temp!=NULL){
		if (temp->info() < temp->sig()->info())
			return false;
		temp = temp->sig();
	}
	delete temp;
	return true;
}//listo

template <class T>
void Pila<T>::flip(int a){
	
	for (int i=0;i<a;i++){

	} 
}//FALTA

template <class T>
void Pila<T>::flipSort(){
	if (pilaVacia() || ordenadaAsc())
		return;
	Pila<T> *a = new Pila<T>(), *b = new Pila<T>();
	Nodo<T> *temp=topNodo(), *buscado = encontrarFlip()->sig();
	while (!ordenadaAsc()){
		while (temp!=buscado){
			temp = temp->sig();
			a->push(pop());
		}
		while (!a->pilaVacia())
			b->push(a->pop());
		while (!b->pilaVacia())
			push(b->pop());
	}
	delete a;
	delete b;
}//FALTA

int main(){
	Pila<int> pila;
	int x, y;
	std::cout << "Ingrese la cantidad de nodos" << std::endl;
	std::cin >> x;
	for (int i=0;i<x;i++){
		cin >> y;
		pila.push(y);
	}
	std::cout << "Antes de ordenar:" << std::endl;
	pila.imprimir();
	std::cout << "Despues de ordenar:" << std::endl;
	pila.flipSort();
	pila.imprimir();
	System("pause");
	return 0;
}