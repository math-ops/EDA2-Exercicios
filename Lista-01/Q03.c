/* LER UM VETOR DE 10 ELEMENTOS INTEIROS E POSITIVOS. CRIAR UM SEGUNDO VETOR DA SEGUINTE FORMA:
OS ELEMENTOS DE INDICE PAR RECEBERÃO OS RESPECTIBOS ELEMENTOS DIVIDIDOS POR 2; OS ELEMENTOS DE
ÍNDICE ÍMPAR RECEBERÃO OS RESPECTIVOS ELEMENTOS MULTIPLICADOS POR 3. IMPRIMA OS DOIS VETORES */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  vetorB[10];
    float result;

    printf("Valores do vetor A:\n");
    for(i=0; i<10; i++){
        if(vetorA[i] % 2 == 1){
        printf("[%d] - IMPAR\n", vetorA[i]);
        vetorB[i] = vetorA[i]*3;
    }else{
        printf("[%d] - PAR\n", vetorA[i]);
        vetorB[i] = vetorA[i]/2;
    }
    }    

    printf("Valores do vetor B:\n");
    for(i=0; i<10; i++){
        printf("[%d] - %.2f\n", vetorA[i], vetorB[i]);
    }

    return 0;
}