/*Leia 10 números inteiros e, depois, um número para buscar. Exiba todos os índices em que ele aparece e a quantidade de ocorrências. Caso não exista no vetor, informe isso.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int i, busca, qtd = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite um numero para buscar: \n");
    scanf("%d", &busca);
    for(i = 0; i < 10; i++){
        if(busca == vetor[i]){
            printf("Encontrado no indice : [%d]\n", i);
            qtd+=1;
        }
    }
    if(qtd==0)
        printf("Valor nao existente no vetor");
    printf("Quantidade de ocorrencias: %d\n", qtd);
    return 0;
}
