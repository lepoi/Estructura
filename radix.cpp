#include "Iterador.cpp"

using namespace std;

template <class T>
void ordenar(Lista<T>*& lista){
		Lista<T> *listas = new Lista<T>[10];
		Iterador<T> iterador = new Iterador<T>(lista);
		int i = 0;
		for (iterador;iterador.sig()!=NULL;iterador++)
			listas[iterador->info()%10]->insertarFinal(iterador.info());
		lista.inicializaLista();

		for (i;i<10;i++){
			iterador = new Iterador<T>(listas[i]);
			for (iterador;iterador.sig()!=NULL;iterador++);
				lista->insertarFinal(iterador.info());
			listas[i].inicializaLista();
		}
		iterador = new Iterador<T>(lista);
		for (iterador;iterador.sig()!=NULL;iterador++)
			listas[(iterador.info()%100)/10]->insertarFinal(iterador.info());
		lista.inicializaLista();

		for (i;i<10;i++){
			iterador = listas[i];
			for (iterador;iterador.sig()!=NULL;iterador++);
				lista->insertarFinal(iterador.info());
			listas[i].inicializaLista();
		}
}

int main(){

	int n;
	int i = 1;
	cin >> n;
	Lista<int> *lista = new Lista<int>();
	int dato;

	cout << "Ingresa un numero" << std::endl;

	cin >> dato;
	lista->insertarInicio(dato);

	for (i;i<n;i++){
		cout << "Ingresa otro dato" << std::endl;
		cin >> dato;
		lista->insertarFinal(dato);
	}

	lista->imprimirLista();
	ordenar(lista);
	lista->imprimirLista();
	return 0;
}