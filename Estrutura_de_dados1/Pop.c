#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct pilha_pilha {
    int dados[tamanho];
    int ini;
    int topo;
};

struct pilha_pilha pilha;

int desempilha(){
    int elemento;
    if(pilha.topo == pilha.ini) {
        printf("Fila vazia. \n");
        system("pause");
    }
    else
    {
        pilha.topo--;
        elemento = pilha.dados[pilha.topo];
        return elemento;
    }
}
