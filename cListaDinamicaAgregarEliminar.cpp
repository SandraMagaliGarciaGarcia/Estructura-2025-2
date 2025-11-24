#include<iostream>
using namespace std;
class cListaDinamica{
    public:
    int i;
    cListaDinamica *sig;
    cListaDinamica(){
        i=0;
        sig=NULL;
    }
    void crearLista();
    void imprimirLista(cListaDinamica*);
    void insertarNodoPrimero(cListaDinamica*);
    void elminiarPrimerNodo(cListaDinamica*);
    void insertarCualquierPosicion(cListaDinamica*);
    void eliminarCualquierPosicion(cListaDinamica*);
};
void cListaDinamica::crearLista(){
    int tam;
    cListaDinamica *lista =NULL,*aux=NULL;
    cout<<"Dame el tamanio de tu lista"<<endl;
    cin>>tam;
    for(int n=0;n<tam;n++){
        if(lista==NULL){
              lista = new cListaDinamica();
              cout<<"Dame el valor del nodo"<<endl;
              cin>>lista->i;
              aux=lista;
        }else{
            aux->sig=new cListaDinamica();
             aux = aux->sig;
            cout<<"dame el numero del nodo"<<endl;
            cin>>aux->i;
           
        }
    }
  imprimirLista(lista);
  //insertarNodoPrimero(lista);
  //elminiarPrimerNodo(lista);
  //insertarCualquierPosicion(lista);
  eliminarCualquierPosicion(lista);


}
void cListaDinamica::eliminarCualquierPosicion(cListaDinamica *lista){
    cListaDinamica *aux1=lista, *aux2=lista;
    int pos;
    cout<<"que posicion deseas eliminar"<<endl;
    cin>>pos;
    for(int a=0;a<pos-2;a++){
        aux1=aux1->sig;
    }
    aux2=aux1->sig->sig;
    aux1->sig->sig=NULL;
    aux1->sig=aux2;
    imprimirLista(lista);

}
void cListaDinamica::insertarCualquierPosicion(cListaDinamica *lista){
    cListaDinamica *aux1=lista,*aux2=lista;
    int pos;
    cout<<"Dame la posicion que deseas agregar el nodo"<<endl;
    cin>>pos;
    //Recorrer el aux1 y aux2
    for(int a=0;a<pos-2;a++){
        aux2=aux2->sig;
    }
    aux1=aux2->sig;
    //crear y agregar el nodo

    cListaDinamica *nodo = new cListaDinamica();
    cout<<"Dame el valor del nodo que deseas agregar"<<endl;
    cin>>nodo->i;
    nodo->sig=aux1;
    aux2->sig=nodo;
    imprimirLista(lista);

}
void cListaDinamica::imprimirLista(cListaDinamica *l){
    /*cListaDinamica *aux=l;
    while(aux!=NULL){
        cout<<aux->i<<endl;
        aux=aux->sig;
    }*/
    cListaDinamica *aux1;
    for(aux1=l;aux1!=NULL;aux1=aux1->sig){
        cout<<aux1->i<<endl;
    }

}
void cListaDinamica::elminiarPrimerNodo(cListaDinamica *lista){
    cout<<"Metodo Eliminar Primer Nodo"<<endl;
    cListaDinamica *a=lista->sig;
    lista->sig=NULL;
    lista=a;
    imprimirLista(lista);
}
void cListaDinamica::insertarNodoPrimero(cListaDinamica *lista){
    cListaDinamica *aux = new cListaDinamica();
    cout<<"Dame el valor del nodo que agregaste";
    cin>>aux->i;
    aux->sig = lista;
    lista=aux;
    imprimirLista(lista);
}
int main(){
    cListaDinamica *llama = new cListaDinamica();
    llama->crearLista();
return 0;
}