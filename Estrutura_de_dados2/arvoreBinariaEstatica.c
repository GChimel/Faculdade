#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura - abstração de um nó
typedef struct str_no {
    char dado;
    int esquerda;
    int direita;
    int pai;
} str_no;

//Constrantes
#define tamanho 100 //Árvore vai ter no máximo 100 nós
#define E 0         //lado esquerdo = 0
#define D 1         //lado direito  = 1
#define R -1        //Raiz

//Variáveis
struct str_no arvore[tamanho];
int lado,indice = 0;            
int opt = -1;                   
char pai, no;                   

//Protítipos das funções
void arvore_insere(int pai, char dado, int lado);
int arvore_procura(char dado);
void menu_mostrar(void);


//Função principal
int main(void) {
    int temp;
    do {
        menu_mostrar();
        scanf("%d",&opt);
            switch (opt) {
                case 1:
                    printf("\nDigite o valor do PAI: ");
                    scanf("%c",&pai);
                    scanf("%c",&pai);
                    printf("\nDigite o valor do NO; ");
                    scanf("%c",&no);
                    scanf("%c",&no);
                    printf("\nDigite o lado da subarvore (E=%d|D=%d|R=%d): ",E,D,R);
                    scanf("%d", &lado);
                    temp = arvore_procura(pai);
                    arvore_insere(temp,no,lado);
                break;
                
            }
        }
    }
}

//Procura nó
int arvore_procura(char dado){
    if (indice != 0) {                      //Se for diferente de zero significa que tem pelo menos um nó na arvore
        for (int i = 0; i < indice; i++) {
            if (arvore[i].dado == dado) {  //Retorna a posição que o dado se encontra no vetor
                return(i);              
            }
        }
    }
    else {                                 //Caso não tenha nenhum vetor diferente de zero ele retorna zero
        return(0);
    }
}

//Inserir nó
void arvore_insere( int pai, char dado, int lado) {
    switch(lado) {
        case E:
            arvore[pai].esquerda = indice;
            arvore[indice].dado = dado;
            arvore[indice].pai = pai;
            arvore[indice].esquerda = -1;
            arvore[indice].direita = -1;
            indice++;
        break;
        case D:
            arvore[pai].esquerda = indice;
            arvore[indice].dado = dado;
            arvore[indice].pai = pai;
            arvore[indice].esquerda = -1;
            arvore[indice].direita = -1;
            indice++;
        break;
        case R:
            arvore[indice].dado = dado;
            arvore[indice].pai = pai;
            arvore[indice].esquerda = -1;
            arvore[indice].direita = -1;
            indice++;
        break;
    }
}

//Desenha menu
void menu_mostrar(void) {
    system("cls");
    for (int i = 0; i < indice; i++) {
        printf("| %c ",arvore[i].dado);
    }
    printf("\n1 - Inserir um NO na arvore..");
    printf("\n2 - Pesquisar um NO na arvore");
    printf("\n0 - Sair.....................");
}
