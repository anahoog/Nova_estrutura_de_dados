#include <iostream>
#include "lista.h"


using namespace std;

int main(){
    auto l = cria_lista();

    lista_anexa(l, "um");
    lista_anexa(l, "dois");
    lista_anexa(l, "três");

    lista_inicia(l);


}