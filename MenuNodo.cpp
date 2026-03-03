#include <iostream>
using namespace std;
class Nodo{
	public:
		int i;
		Nodo *sig;
		Nodo (){
			i = 0;
			sig = NULL;
		}
		friend class cManipula;
};
class cManipula{
	public:
		void crearLista();
		void imprime(Nodo *p);
		void elimina(Nodo *);
};
void cManipula::crearLista(){
	Nodo *p= NULL;
	Nodo *aux = NULL;
	aux = new Nodo;
	p = aux;
	int incre = 0;
	while (5 > incre){
		cout << "Inserta el valor del nodo: " << incre << endl;
		cin >> aux -> i;
		aux -> sig = new Nodo();
		aux = aux -> sig;
		incre ++;
	}
	imprime (p);
	elimina (p);
}
void cManipula::imprime (Nodo *lista){
	Nodo *aux;
	aux = lista;
	while (lista -> sig != NULL){
		cout << lista -> i;
		lista = lista -> sig;
	}
	cout << "\n" << endl;
}
void cManipula::elimina (Nodo *lista){
	Nodo *aux;
    Nodo *p;
    aux = lista;
    p = lista;
    int a = 2;
    int cont;
    cout << "Ingresa la posicion a borrar:" << endl;
    cin >> cont;
    while (a < cont){
        aux = aux -> sig;
        a ++;
    }
    lista = aux -> sig -> sig;
    aux -> sig -> sig = NULL;
    aux -> sig = lista;
    imprime(p);
}

int main(){
	cManipula *obj = new cManipula();
	obj -> crearLista();
}
