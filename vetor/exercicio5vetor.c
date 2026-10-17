/*Leia 7 números inteiros. Exiba os elementos do último para o primeiro, sem alterar o vetor.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[7], i;
    for(i = 0; i< 7; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i = 6; i >= 0; i--){
         printf("Valores do vetor: %d\n", vetor[i]);
    }
    return 0;
}
