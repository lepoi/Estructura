#include <iostream>
#include <cstddef>

using namespace std;

template <class T>
class NodoBinario{
public:
	NodoBinario(T dato);
	NodoBinario(T dato, NodoBinario<T> *izq, NodoBinario<T> *der);
	T& info();
	NodoBinario<T>*& i();
	NodoBinario<T>*& d();
	void imprimir();
private:
	T informacion;
	NodoBinario *izquierdo;
	NodoBinario *derecho;
};