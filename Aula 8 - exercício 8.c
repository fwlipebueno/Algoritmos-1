#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 8 - exercício 8.c
@author: Felipe Almeida
@date: 21 Out 2021
@brief: Exercício 8 da aula 8

Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:

A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
A segunda opção imprime “Teste2” e mostra o menu novamente.
A terceira opção finaliza o programa.
Caso digite uma opção diferente, deve mostrar uma mensagem de erro
e mostrar o menu novamente..
*/

int main(){
    int opcao, interruptor;

    interruptor = 1;
    while(interruptor){
        printf("\nMenu do programa:\n1 - Teste 1\n2 - Teste 2\n3 – Sair do programa\nDigite sua opção:");
        scanf("%i",&opcao);
        switch (opcao){
        case 1:
            printf("Teste1\n");
            break;
        case 2:
            printf("Teste2\n");
            break;
        case 3:
            interruptor = 0;
            printf("\nPrograma finalizado.\n");
            break;
        default:
            printf("\nOpção não indentificada.\n");
            break;
      }//switch
    }//while

return EXIT_SUCCESS;
}//main
