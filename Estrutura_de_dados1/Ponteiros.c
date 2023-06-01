#include <stdio.h>
int main(void){
        float c = 3.14;
        float *pc = &c;
        printf("Endereço de c: %x.\n", &c);
        pc++;
        printf("Endereço para o qual pr aponta: %x.\n", (void *) pc);
}