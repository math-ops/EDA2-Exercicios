//FAÇA UM PROGRAMA QUE LÊ 10 NÚMEROS INTEIROS DO TECLADO E ARMAZENE EM UM VETOR. 
//AO FINAL IMPRIMA O VETOR ARMAZENADO NOS DOIS SENTIDOS.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, vetor[10];

    for(i=0; i<10; i++){
        printf("Informe o %dº valor?\n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor Normal:\n");
    for(i=0; i<10; i++){
        printf("[%d]\n", vetor[i]);
    }

    printf("Vetor Inverso:\n");
    for(i=0;i<10; i++){
        printf("[%d]\n", vetor[9-i]);
    }


    return 0;
} 