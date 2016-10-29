#include "Nodo.cpp"

template <class T> 
class Lista { 
public: 
	Lista(); 
	Lista(T&);
	~Lista(); 
	void inicializaLista(); 
	void destruirLista(); 
	void imprimirLista(); 
	int totalNodos(); 
	void insertarInicio(T& dato); 
	void insertarFinal(T& dato); 
	bool listaVacia() const; 
	void eliminarNodo(const T& dato); 
	bool Buscar(const T& dato) const; 
	Nodo<T>* ini();	
private: 
	Nodo<T> *inicio; 
};