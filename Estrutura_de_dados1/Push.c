#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct pilha_pilha {
    int dados[tamanho];
    int ini;
    int topo;
};

struct pilha_pilha pilha;

void empilha(int elemento) {
    if (pilha.topo == tamanho) {
        printf("Fila cheia. \n");
        system("pause");
}
else 
{
    pilha.dados[pilha.topo] = elemento;
    pilha.topo++;
}

