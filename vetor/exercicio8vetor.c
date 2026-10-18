/*Leia 10 números inteiros e encontre o segundo maior valor distinto. Por exemplo, em {8,8,5,3}, a resposta é 5. Se não houver dois valores distintos, informe isso.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int i, Maior, segundoMaior;
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    Maior = vetor[0];
    segundoMaior = vetor[0];
    for(i = 1; i < 10; i++){
        if(vetor[i] > Maior){
            segundoMaior = Maior;
            Maior = vetor[i];
        }
        else if(vetor[i] < Maior && vetor[i] > segundoMaior){
            segundoMaior = vetor[i];
        }
    }
    printf("O segundo maior numero do vetor e: %d", segundoMaior);
}