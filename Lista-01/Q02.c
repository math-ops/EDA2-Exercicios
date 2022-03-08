/* LER UM VETOR DE 10 ELEMENTOS; CRIE UM SEGUNDO VETOR, COM TODOS OS ELEMENTOS NA ORDEM INVERSA, OU SEJA
O ÚLTIMO ELEMENTO PASSARÁ A SER O PRIMEIRO, O PENÚLTIMO O SEGUNDO E ASSIM POR DIANTE. IMPRIMA OS DOIS VETORES */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, vetorA[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, vetorB[10];

    printf("Valores do vetor A\n");
    for(i=0; i<10; i++){
        printf("[%d]", vetorA[i]);
        vetorB[i] = vetorA[i];
    }

    printf("\nValores do vetor B\n");
    for(i=0; i<10; i++){
        printf("[%d]", vetorB[9-i]);
    }

    return 0;
}