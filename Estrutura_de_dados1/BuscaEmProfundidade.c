void buscaEmProfundidade (struct str_no g[], int inicio, int alvo) {

    int pilha[MAXV];
    bool visitando[MAXV];
    int indice = 0;
    bool achou = false;
    int corrente = inicio;
    struct str_no *ptr;
    int i;
    printf("=-=-=-= Busca Em Profundidade =-=-=-=)\n");
    for (i = 0; i < MAXV; i++) {
        visitado[i] = false;
    }
    while(true) {
        if(!visitado[corrente]) {
            printf("Visitado: %d\n",corrente);
            if(corrente == alvo) {
                printf("Alvo encontrado!\n\n\n");
                return;
            }
            visitado[corrente] = true;
            pilha[indice] = corrente;
            indice++;
        }
        achou = false;
        for(ptr = g[corrente].proximo; ptr != NULL; ptr = ptr->proximo){

        }
    }
}