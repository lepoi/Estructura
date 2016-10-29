#include "Pila.cpp"

template <class T>
void Pila<T>::flip(int a){
	Pila<T> *A = new Pila<T>();
	Pila<T> *B = new Pila<T>();
	for (int i=0;i<a;i++){
		A->push(pop());
	}
	for (int i=0;i<a;i++){
		B->push(A->pop());
	}
	for (int i=0;i<a;i++){
		push(B->pop());
	}
}

template <class T>
void Pila<T>::flipSort(){
	int c = 0;
	Nodo<T> *temp = topNodo();
	Nodo<T> *max = topNodo();
	while (temp!=NULL){
		c++;
		temp = temp->sig();
	}
	int c1=c, c2;
	for (int i=0;i<c;c--){
		if (ordenada())
			return;
		c2 = 0;
		max = topNodo();
		temp = topNodo();
		for (int j=0;j<c;j++){
			if (temp->info() > max->info()){
				max = temp;
				c2 = j;
			}
			temp = temp->sig();
		}
		flip(c2+1);
		flip(c);
	}
}

template <class T>
bool Pila<T>::ordenada(){
	Nodo<T> *temp = topNodo();
	while (temp!=NULL && temp->sig()!=NULL){
		if (temp->info() > temp->sig()->info())
			return false;
		temp = temp->sig();
	}
	return true;
}

int main(){

	Pila<int> *pila = new Pila<int>();
	int x, y, c=0;
	std::cout << "Ingrese cantidad de pancakes:" << std::endl;
	std::cin >> x;
	while(c < x){
		do{
			y = rand()%49+1;
		}while (pila->find(y));
		pila->push(y);
		c++;
	}
	std::cout << "Pancakes sin ordenar:" << std::endl;
	pila->imprimir();
	pila->flipSort();
	std::cout << "Pancakes ordenados: " << std::endl;
	pila->imprimir();

	return 0;
}