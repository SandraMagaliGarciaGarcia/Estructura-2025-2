#include<iostream>
using namespace std;
class cLista{
    public:
    int num1;
    int num2;
    cLista *sig;
    cLista(){
        num1=num2=0;
        sig=NULL;
    }
    void crearLista();
    void imprimirLista(cLista *);
};
void cLista::crearLista(){
    cLista *nodo = new cLista();
    nodo->num1=10;
    nodo->num2=30;
    cout<<nodo->num1<<endl;
    cout<<nodo->num2<<endl;

    nodo->sig=new cLista();
    nodo->sig->num1=30;
    nodo->sig->num2=100;
    cout<<nodo->sig->num1<<endl;
    cout<<nodo->sig->num2<<endl;

    nodo->sig->sig = new cLista();
    nodo->sig->sig->num1 = 100;
    nodo->sig->sig->num2 = 10;
    cout<<nodo->sig->sig->num1<<endl;
    cout<<nodo->sig->sig->num2<<endl;

    //imprimirLista(nodo);
}
/*void cLista::imprimirLista(cLista *list){
    cout<<"Este es el metodo imprimirLista"<<endl;
    cout<<list->i<<endl;
    cout<<list->sig->i<<endl;
    cout<<list->sig->sig->i<<endl;
    cout<<list->sig->sig->sig<<endl;
}*/
int main(){
    cLista *a = new cLista();
    a->crearLista();
    return 0;
}