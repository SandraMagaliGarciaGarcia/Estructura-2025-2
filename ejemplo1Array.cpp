#include <iostream>
using namespace std;
class arreglo1{
    public:
    arreglo1(){

    }
    void ejemInicial();
    void ejemplo2Array();
    void ejemSuma();

};
void arreglo1::ejemInicial(){
int a[4] = {6,7,8,10};
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
}
void arreglo1::ejemplo2Array(){
    int tam;
    cout<<"Dame el tamaño del array"<<endl;
    cin>>tam;
    int arregloUsuario[tam];
    cout<<"llena las posiciones"<<endl;
    for(int i=0;i<tam;i++){
        cin>>arregloUsuario[i];
    }
    for(int a=0;a<tam;a++){
        cout<<arregloUsuario[a];
    }

}
void arreglo1::ejemSuma(){
    int tam, suma=0;
    cout<<"Dame el tamaño del array"<<endl;
    cin>>tam;
    int arregloSuma[tam];
    cout<<"llena las posiciones"<<endl;
    for(int i=0;i<tam;i++){
        cin>>arregloSuma[i];
    }
    for(int a=0;a<tam;a++){
        cout<<arregloSuma[a];
    }
    for(int s=0;s<tam;s++){
         suma = arregloSuma[s]+suma;
         cout<<suma<<endl;
    }
}
int main(){
    arreglo1 *aux = new arreglo1();
    //aux->ejemInicial();
    //aux->ejemplo2Array();
    aux->ejemSuma();
}