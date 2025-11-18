import java.util.*;

class ListaJava {
    public int i;
    ListaJava sig;
    Scanner entrada;

    ListaJava() {
        entrada = new Scanner(System.in);
        i = 0;
        sig = null;
    }

    void crearLista() {
        int tam;
        ListaJava lista = null, aux = null;
        System.out.println("Dame el tamanio de la lista");
        tam = entrada.nextInt();
        for (int n = 0; n < tam; n++) {
            if (lista == null) {
                lista = new ListaJava();
                System.out.println("Dame el valor del nodo");
                lista.i = entrada.nextInt();
                aux = lista;
            } else {
                aux.sig = new ListaJava();
                aux = aux.sig;
                System.out.println("Dame el valor del nodo");
                lista.i = entrada.nextInt();
            }

        }
        imprimirLista(lista);
    }

    void imprimirLista(ListaJava l) {
        ListaJava aux1;
        for (aux1 = l; aux1 != null; aux1 = aux1.sig) {
            System.out.println(aux1.i);
        }
    }

    public static void main(String args[]) {
        ListaJava llama = new ListaJava();
        llama.crearLista();
    }
}