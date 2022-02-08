#include "lista.h"

Lista cria_lista(){
    Lista nova;

    nova.len = 0;
    nova.primeiro = nullptr;

    return nova;
}

Nodo* cria_nodo(const string & dado){
    Nodo * nodo = new Nodo;

    nodo->dado= dado;
    nodo->sucessor = nullptr;
}

void lista_anexa(Lista & l, const string & dado){
    Nodo * novo = cria_nodo (dado);

    if(l.len==0){
        l.primeiro = novo;
    }else{
        Nodo * ptr = l.primeiro;
        while(ptr->sucessor!=nullptr){
            ptr = ptr->sucessor;
        }
        ptr->sucessor = novo;
    }
    l.len++;
}