#include "Pila.cpp"
#include <cstring>

using namespace std;

int main(){
	Pila<float> *pila = new Pila<float>();
	char a;
	int x;
	float y, z;
	cout << "Cantidad de elementos en la expresion \n";
	cin >> x;
	for (int i=0;i<x;i++){
		cout << "El elemento " << i+1 << " es (a) un operando o (b) un operador? \n";
		cin >> a;
		if (a == 'a'){
			cout << "Ingrese su operando \n";
			cin >> y;
			pila->push(y);
		}
		else if (a == 'b'){
			cout << "Ingrese su operador \n";
			cin >> a;
			if(a == '+')
				pila->push(pila->pop()+pila->pop());
			else if (a == '-')
				pila->push(pila->pop()-pila->pop());
			else if (a == '*')
				pila->push(pila->pop()*pila->pop());
			else if (a == '/'){
				y = pila->pop();
				z = pila->pop();
				pila->push(z/y);
			}
			else if (a == '^'){
				y = pila->pop();
				z = pila->pop();
				pila->push(pow(z,y));
			}
		}
	}

	cout << "Resultado = " << pila->pop() << endl;

	return 0;
}