#include <iostream>
#include <cstddef>

using namespace std;

template <class T>
class NodoBin{
public:
	NodoBin();
	NodoBin(T dato);
	NodoBin(T dato, NodoBin<T> *izq, NodoBin<T> *der);
	T& info();
	NodoBin<T>*& i();
	NodoBin<T>*& d();
	void enorden();
	void preorden();
	void postorden();
	void imprimir();
private:
	T informacion;
	NodoBin *izquierdo;
	NodoBin *derecho;
};