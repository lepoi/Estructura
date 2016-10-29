#include "Lista.cpp"

template <class T> 
class Iterador { 
public: 
	Iterador(); 
	Iterador(const Lista<T>*& a);  
	Nodo<T> operator++(int);
	Nodo<T> operator++();
	bool operator!=(const Iterador<T>& a) const;
	T info();
	Nodo<T>*& sig();
private: 
	T informacion;
	Nodo<T> *siguiente; 
};