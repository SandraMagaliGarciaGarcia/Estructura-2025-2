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
            cout<<"dame el numero del nodo"<<endl;
            cin>>aux->i;
            aux = aux->sig;
        }
    }
  imprimirLista(lista);

}
void cListaDinamica::imprimirLista(cListaDinamica *l){
    cListaDinamica *aux=l;
    while(aux!=NULL){
        cout<<aux->i<<endl;
        aux=aux->sig;
    }

}
int main(){
    cListaDinamica *llama = new cListaDinamica();
    llama->crearLista();
return 0;
}