/*Leia 10 números inteiros. Informe quantos são pares quantos são ímpares.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, par=0, impar=0;
    int vetor[10];
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            par +=1;
        }
        else
        impar +=1;
    }
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d", impar);
    return 0;
}
