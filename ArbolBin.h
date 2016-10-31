#include "NodoBinario.cpp"

template <class T>
class ArbolBin{
public:
	ArbolBin();
	NodoBin<T>*& root();
	bool vacio() const;
	void enorden();
	void preorden();
	void postorden();
private:
	NodoBin<T>* raiz;
};