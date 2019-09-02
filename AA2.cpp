#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
}*inicio,*fin;

struct pila{
    int dato;
    pila *sig;
}*Pinicio,*Pfin;

class Estructura{
    public:
        Nodo* crearNodo(int valor){
            Nodo *n=new Nodo;
            n->dato=valor;
            n->sig=nullptr;
            return n;
        }

        pila* crearNodoPila(int valor){
            pila *n=new pila;
            n->dato=valor;
            n->sig=nullptr;
            return n;
        }

        void actCola (int valor){
            Nodo *n= crearNodo(valor);
            if(!inicio){
                inicio=n;
                fin=n;
            }else{
                fin->sig=n;
                fin=n;
            }
        }

        void mostrarLista(){
            Nodo *temp=inicio;
            if(!inicio)
                cout<<"No hay datos en la lista"<<endl;
            else
                while(temp){
                    cout<<temp->dato<<endl;
                    temp=temp->sig;
                }
        }

        void mostrarPila(){
                pila *temp=Pinicio;
                if(!Pinicio)
                    cout<<"La pila esta vacia"<<endl;
                else
                    while(temp){
                        cout<<temp->dato<<endl;
                        temp=temp->sig;
                    }
            }

        void inverse(){
            Nodo *temp=inicio;
            pila *final=Pfin;
            if(!inicio)
                cout<<"LA cola no tiene datos"<<endl;
            else
            {
                 while(temp){
                    pila *n = crearNodoPila(temp->dato);
                    n->sig=Pinicio;
                    Pinicio = n;
                    temp=temp->sig;
                }
            }   
        }
};


int main()
{
    Estructura nodo;

    nodo.actCola(0);
    nodo.actCola(1);
    nodo.actCola(2);
    nodo.actCola(3);
    nodo.actCola(4);
    nodo.mostrarLista();
    nodo.inverse();
    nodo.mostrarPila();
} 