#include<iostream>
using namespace std;
class cLista{
    public:
    int i;
    cLista *sig;
    cLista(){
        i=0;
        sig=NULL;
    }
    void crearLista();
    void imprimirLista(cLista *);
};
void cLista::crearLista(){
    cLista *nodo = new cLista();
    nodo->i=10;
    cout<<nodo->i<<endl;

    nodo->sig=new cLista();
    nodo->sig->i=30;
    cout<<nodo->sig->i<<endl;

    nodo->sig->sig = new cLista();
    nodo->sig->sig->i = 100;
    cout<<nodo->sig->sig->i<<endl;

    imprimirLista(nodo);
}
void cLista::imprimirLista(cLista *list){
    cout<<"Este es el metodo imprimirLista"<<endl;
    cout<<list->i<<endl;
    cout<<list->sig->i<<endl;
    cout<<list->sig->sig->i<<endl;
    cout<<list->sig->sig->sig<<endl;
}
int main(){
    cLista *a = new cLista();
    a->crearLista();
    return 0;
}