#ifndef  LISTASIMPLES_LISTA_H
#define  LISTASIMPLES_LISTA_H

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

using std::string;

struct Nodo {
    string dado;
    Nodo *sucessor;
};

struct Lista {
    Nodo *primeiro;
    int len;
};

Lista cria_lista();

void destroi_lista (Lista & l);

void lista_anexa (Lista & l, const string & dado);

void lista_insere (Lista & l, const string & dado);

void lista_insere (Lista & l, const string & dado, int pos);

void lista_remove (Lista & l, const string & dado, int pos);

string& lista_obtem(Lista & l, int pos);

void lista_inicia();

