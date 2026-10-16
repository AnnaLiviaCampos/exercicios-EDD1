/*Leia seis números inteiros. Calcule e exiba a soma dos elementos e a média, permitindo casas decimais*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[6];
    float soma = 0, media;
    int i;
    for(i = 0; i < 6; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%f", &vetor[i]);
    }
    for(i = 0; i < 6; i++){
        soma += vetor[i];
    }
    printf("O valor da soma e: %.2f\n", soma);
    media = soma/6;
    printf("O valor da media e: %.2f", media);
    return 0;
}