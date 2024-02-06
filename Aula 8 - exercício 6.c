#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 8 - exercício 6.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 6 da aula 8

Faça um programa que receba um número real, calcule e exiba o quadrado dele.
O programa deverá calcular o quadrado de vários números e finalizar quando for digitado um número negativo ou zero.
*/

int main(){
    float valor, quadrado;

    while(valor > 0){
        printf("Digite um numero real:");
        scanf("%f",&valor);
        if(valor > 0){
            quadrado = (valor * valor);
            printf("O quadrado desse valor será: %.2f .\n", quadrado);
        }else{
            printf("Programa Finalizado.\n");
        }
    }//while

return EXIT_SUCCESS;
}//main
