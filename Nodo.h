#include <iostream>
#include <cstddef>
#include <random>

template <class T> 
class Nodo { 
public: 
	Nodo(); 
	Nodo(T info); 
	Nodo(const Nodo& a); 
	//~Nodo(); 
	void destruirNodo();
	bool operator==(const Nodo<T>& a) const;
	bool operator!=(const Nodo<T>& a) const;
	T& info();
	Nodo*& sig(); 
private: 
	T informacion; 
	Nodo *siguiente; 
};