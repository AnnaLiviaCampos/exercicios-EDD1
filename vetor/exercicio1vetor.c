/*Leia 5 números inteiros e armazene em um vetor. Depois, exiba todos os valores na ordem em que foram digitados*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];
    int i;
    for(i =0; i < 5; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i =0; i < 5; i++){
        printf("Valores do vetor: %d\n", vetor[i]); 
    }   
    return 0;
}