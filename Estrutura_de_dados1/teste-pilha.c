//Código com errro
#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
    int dado;
    NO* prox;
}NO;

typedef struct PILHA {
    NO* topo;
}PILHA;

PILHA *p;

int foo(){
    NO* ptr = p->topo;
    int dado;
    if (ptr != NULL) {
        p -> topo = ptr -> prox;
        ptr -> prox = NULL;
        dado = ptr -> dado;
        free(ptr);
        return dado;
    }
}