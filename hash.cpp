#include "Lista.cpp"

int mod(int& Datoto){
	return ((5*dato)%8);
}

void almacenar(int& dato, Lista<int> listas []){
	listas[mod(dato)].insertarFinal(dato);
	std::cout << "Dato almacenado en [" << mod(dato) << "]";
}

void obtener(int& dato, Lista<int> listas []){
	if (!listas[mod(dato)].Buscar(dato)) 
		std::cout << "No se encontro el dato" << std::endl;
	else 
		std::cout << "Dato encontrado en " << mod(dato) << std::endl;
}

void imprimir(Lista<int> listas []){
	int i = 0;
	for (i;i<8;i++){
		std::cout << "[" << i << "]" << std::endl << std::endl;
		listas[i].imprimirLista();
	}
}

int main(){
	Lista<int> listas = new Lista<int> [8];
	int n;
	while (n!=4){
		std::cout << "1) Ingresar un dato" << std::endl <<
				"2) Buscar un dato" << std::endl <<
				"3) Imprimir arreglos" << std::endl <<
				"4) Salir" << std::endl;
		std::cin >> n;
		if (n==1){
			int x;
			std::cout << "Ingresa un numero";
			std::cin >> x;
			almacenar(x, listas);
		}
		else if (n==2){
			int x;
			std::cout << "Ingresa un numero";
			std::cin >> x;
			obtener(x, listas);	
		}
		else if (n==3){
			imprimir(listas);
		}
	}
	return 0;
}