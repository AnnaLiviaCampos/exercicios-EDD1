/*Leia 8 números inteiros e inverta a ordem dos elementos dentro do próprio vetor, sem utilizar outro vetor, exiba o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[8];
    int i, temp;
    for(i = 0; i < 8; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 4; i++){// percorre apenas a primeira metade do vetor para fazer as trocas.
        temp = vetor[i];
        vetor[i] = vetor[7-i];// copia o valor da posição oposta para a posição i.
        vetor[7-i] = temp; // coloca o valor guardado na posião oposta.
    }
    printf("\n Vetor invertido: \n");
    for(i = 0; i < 8; i++){
        printf("%d", vetor[i]);
    }
    return 0;
}