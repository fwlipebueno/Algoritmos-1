#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 9 - exercício 2.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 2 da aula 9

Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000.
Ao receber um valor fora da faixa, o programa deverá parar de solicitar valores,
exibir quantos valores válidos foram digitados e finalizar.
*/

int main(){
    int valor_recebido = 0, valores_validos = 0;

    do{
        printf("Insira um valor: ");
        scanf("%i", &valor_recebido);
        if(valor_recebido > 500 && valor_recebido < 1000){
            valores_validos++;
        }
    }/*do*/ while (valor_recebido > 500 && valor_recebido < 1000);
    printf("Número de valores válidos: %i\n", valores_validos);

return EXIT_SUCCESS;
}//main
