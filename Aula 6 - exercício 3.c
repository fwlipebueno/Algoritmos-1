#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*
@file: Aula 6 - exercício 3.c
@author: Felipe Almeida
@date: 13 Out 2021
@brief: Exercício 3 da aula 6

Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
 Para isso, lembre-se da fórmula de Báskara:
*/
int main(){
    float a, b, c,    //coeficientes
          delta,      //delta
          sqrtdelta,  //raiz quadrada de delta
        raiz1,raiz2;  //raízes

        //Passo 1: Recebendo os coeficientes
        printf("Equação do 2o grau: ax² + bx + cx = 0\n");

        printf("Insira o valor de a: ");
        scanf("%f", &a);

        printf("Insira o valor de b: ");
        scanf("%f", &b);

        printf("Insira o valor de c: ");
        scanf("%f", &c);


        //Passo 2: Checando se a equação é válida
        if(a != 0)
        {

        //Passo 3: recebendo o valor de delta e calculando sua raiz quadrada
            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);

        //Passo 4: se a raiz de delta for maior que 0, as raízes são reais
            if(delta >= 0)
            {
                raiz1 = (-b + sqrtdelta)/(2*a);
                raiz2 = (-b - sqrtdelta)/(2*a);
                printf("Raízes: %.2f e %.2f", raiz1, raiz2);
            }
        //Passo 5: se delta for menor que 0, as raízes serão complexas
            else
            {
                delta = -delta;
                sqrtdelta = sqrt(delta);
                printf("Raíz 1: %.2f + i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
                printf("Raíz 2: %.2f - i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));

            }

        }
        else
            printf("Coeficiente 'a' inválido. Não é uma equação do 2o grau");
return 0;
}
