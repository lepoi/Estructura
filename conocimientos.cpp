#include "ArbolBin.cpp"
#include <string>

int main(){
	ArbolBin<string> *A = new ArbolBin<string>();
	NodoBin<string> *r = new NodoBin<string>("Es mujer?");
	NodoBin<string> *a1 = new NodoBin<string>("Se ve como profesor?");
	NodoBin<string> *a2 = new NodoBin<string>("Fernanda");
	NodoBin<string> *b1 = new NodoBin<string>("Tiene cara de adicto?");
	NodoBin<string> *b2 = new NodoBin<string>("Dax");
	NodoBin<string> *c1 = new NodoBin<string>("Es un dictador de closet?");
	NodoBin<string> *c2 = new NodoBin<string>("Stoner?");
	NodoBin<string> *d1 = new NodoBin<string>("poi?");
	NodoBin<string> *d2 = new NodoBin<string>("Victor");
	NodoBin<string> *d3 = new NodoBin<string>("Magda");
	NodoBin<string> *d4 = new NodoBin<string>("Alejanky");
	NodoBin<string> *e1 = new NodoBin<string>("Alan");
	NodoBin<string> *e2 = new NodoBin<string>("Naranjo");
	A->root() = r;
	r->i() = a1;
	r->d() = a2;
	a1->i() = b1;
	a1->d() = b2;
	b1->i() = c1;
	b1->d() = c2;
	c1->i() = d1;
	c1->d() = d2;
	c2->i() = d3;
	c2->d() = d4;
	d1->i() = e1;
	d1->d() = e2;

	char x;
	NodoBin<string> *temp = r;
	cout << "Adivina quien edicion ICC 2015-2019 \n";
	while (temp != NULL) {
		temp->imprimir();
		cout << "[y] / [n]\n";
		cin >> x;
		if (x == 'n')
			temp = temp->i();
		else if (x == 'y')
			temp = temp->d();
		if (temp->i() == NULL){
			cout << "Tu ICC es " << temp->info() << "! \n";\
			return 0;
		}
	}
	return 0;
}