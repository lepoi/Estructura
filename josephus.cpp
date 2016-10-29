#include "ListaCircular.cpp"

int main(){
	int n, x;
	int i = 1;
	std::cout << "Ingrese cantidad de datos" << std::endl;	
	std::cin >> n;
	std::cout << "Ingrese el dato 0" << std::endl;
	std::cin >> x;
	Lista<int> lista = Lista<int>(x);
	for (i;i<n;i++){
		std::cout << "Ingrese el dato " << i << std::endl;
		std::cin >> x;
		lista.insertarFinal(x);
	}

	lista.imprimirLista();

	int y;
	int m = 0;
	int t = lista.totalNodos();
	int *datos = new int [t];
	
	while (lista.totalNodos()!=1){

		std::cout << "Ingresa el dato a eliminar" << std::endl;
		std::cin >> y;

		if (lista.Buscar(y)){

			for (int i=0;i<lista.totalNodos();i++){
				if (datos[i] == y)
					datos[i] = -69;
			}
			lista.eliminarNodo(y);
			m++;
		}
	}

	lista.imprimirLista();

	i = 0;
	while (datos[i] != lista.ini()->info()){
		i++;
	}

	std::cout << "Posicion original: " << i << std::endl << "Rondas sobrevividas: " << m;

	return 0;
}