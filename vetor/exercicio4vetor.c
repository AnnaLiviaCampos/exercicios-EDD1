/*Leia 8 números inteiros. Exiba o maior e menor valor, junto com seus respectivos índices. Se houver repetição, mostre o primeiro índice de cada um.
vetor[i] = valor armazenado;
i = índice onde o valor está.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[8];
    int i;
    int maior, menor;
    int indiceMaior = 0, indiceMenor = 0; // variaveis que guardam as posições do menor e maior valor (indices)
    for(i = 0; i < 8; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
        if(i == 0){ //verifica se estamos na primeiro repetição, lendo o primeiro elemento
            maior = vetor[0]; // passa o primeiro valor digitado para a variavel de maior
            menor = vetor[0]; // passa o primeiro valor digitado para a variavel de maior
        }else{
            if(vetor[i] > maior){ // verifica se o numero atual é menor do que o valor armazenado na variável maior até o momento
                maior = vetor[i]; 
                indiceMaior = i;
            }
            if(vetor[i] < menor){
                menor = vetor[i];
                indiceMenor = i;
            }
        }
    }
    printf("Maior valor: %d, e indice:[%d]\n", maior, indiceMaior);
    printf("Menor valor: %d, e indice: [%d]", menor, indiceMenor);
    return 0;
}