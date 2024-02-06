#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>/*
@file: Aula 8 - exercício 9.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 9 da aula 8

Faça um programa que simule um jogo, onde o usuário deverá descobrir
um número aleatório escolhido pelo computador (de 1 a 100).
O usuário poderá realizar até 6 tentativas, o programa deverá
retornar as mensagens “muito alto”, “muito baixo” até o usuário acertar o número
ou esgotar o número máximo de tentativas

Dica: Pesquise sobre como gerar um numero aleatório  utilizando a função
rand da biblioteca math.h
*/

int main(){
    int tentativas, numero, aleatorizador;

    tentativas = 0;
    aleatorizador = 0;
    srand(time(NULL));
    aleatorizador = rand() % 100;
    tentativas = 6;
    printf("Jogo para descobrir qual o número aleatório!!!\n");
    while(tentativas < 7 && tentativas > 0){
        printf("Você tem %i chances.\n", tentativas);
        printf("Digite um numero:");
        scanf("%i",&numero);
        tentativas--;
        if(tentativas > 0){
            if(numero > aleatorizador){
                printf("Muito alto!!!\n");
            }else if(numero < aleatorizador){
                printf("Muito baixo!!!\n");
            }else if(numero == aleatorizador){
                printf("Parabéns, você acertou!!\n");
                printf("Programa Finalizado.\n");
                tentativas = -30;
            }
        }else{
            printf("Infelizmente você não acertou, o valor era: %i \n",aleatorizador);
            printf("Programa Finalizado.\n");
        }//else
    }//while

return EXIT_SUCCESS;
}//main
