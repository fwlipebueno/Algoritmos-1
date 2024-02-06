/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 06 da Prova.

36 - Escreva um programa que:
a) Calcule o valor do co-seno de x através de 20 termos da série seguinte:
co-seno(x)=1- x²/2! + x^4/4! - x^6/6! + x^8/8! - ...
b) Calcule a diferença entre o valor calculado no item a e o valor fornecido pela função COS(X).
c) Imprima o que foi calculado nos itens a e b

Resolução:
O programa implementa uma forma de calcular o valor do co-seno de um ângulo x em radianos utilizando a série de Taylor do co-seno. Essa série é dada por:
co-seno(x) = 1 - x²/2! + x⁴/4! - x⁶/6! + x⁸/8! - ...
O programa calcula o valor do co-seno de x aproximado com 20 termos dessa série. 
Para isso, utiliza um loop que vai de 1 até 20, e a cada iteração, calcula um termo da série e adiciona ou subtrai da soma parcial, dependendo se o termo é par ou ímpar.
Os termos pares da série são aqueles que possuem x elevado a uma potência par, e os termos ímpares são aqueles que possuem x elevado a uma potência ímpar. 
Para saber se o termo é par ou ímpar, o programa utiliza o operador módulo (%) para verificar se o índice da iteração é par ou ímpar. 
Se o índice for par, o termo calculado é somado na soma parcial, caso contrário, é subtraído.

O cálculo de cada termo da série é feito utilizando a função pow(x, n) para elevar x à potência n e a função tgamma(n) para calcular o fatorial de n+1 (não é o fatorial comum, 
mas sim o fatorial generalizado que é definido como: tgamma(n+1) = n!).

Após calcular o valor do co-seno aproximado, o programa calcula o valor real do co-seno de x utilizando a função cos(x) da biblioteca math.h e calcula a diferença entre os valores aproximado e real.
Finalmente, o programa imprime na tela o valor aproximado do co-seno de x com 20 termos da série e a diferença entre o valor aproximado e o valor real.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

    double x, cos_x_aprox = 1, cos_x_real;
    int i, n = 20;
    
    printf("Digite o valor de x em radianos: ");
    scanf("%lf", &x);
    
    // Cálculo do co-seno pelo somatório de 20 termos da série
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { // termo par
            cos_x_aprox += pow(x, 2 * i) / tgamma(2 * i + 1);
        }
        else { // termo ímpar
            cos_x_aprox -= pow(x, 2 * i) / tgamma(2 * i + 1);
        }
    }
    
    // Cálculo do co-seno pela função COS(X)
    cos_x_real = cos(x);
    
    // Cálculo da diferença entre os valores
    double diferenca = cos_x_real - cos_x_aprox;
    
    // Impressão dos resultados
    printf("a) Valor aproximado do co-seno de x com 20 termos da série: %.10lf\n", cos_x_aprox);
    printf("b) Diferença entre o valor aproximado e o valor real: %.10lf\n", diferenca);
    
    return 0;
}
