#include "ListaCircular.cpp"

int main(){
	int n, x;
	int i = 1;
	std::cout << "Ingrese cantidad de datos";	
	std::cin >> n;
	std::cout << "Ingrese el dato 0" << std::endl;
	std::cin >> x;
	Lista<int> lista = new Lista<int>(x);
	for (i;i<n;i++){
		std::cout << "Ingrese el dato " << i << std::endl;
		std::cin >> x;
		lista.insertarFinal(x);
	}
	lista.imprimirLista();
	return 0;
}