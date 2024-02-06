/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 05 da Prova.

35 - Escreva um programa que calcule o valor de e^x através da série:
e^x=x^0+ x¹/1! + x²/2! + x³/3! + ...
De tal forma que o mesmo difira do valor calculado através da função EXP de, no máximo, 0,0001.0 valor de x deve
ser lido de uma unidade de entrada. O programa deverá escrever o valor de x, o valor calculado através da série, 
o valor dado pela função EXP e o número de termos utilizados da série.

Resolução:
O código dado implementa o cálculo do valor de e^x usando a série de Taylor da função exponencial, que é definida por:
e^x = Σ (x^n / n!) (para n variando de 0 a infinito)
Onde Σ é a notação matemática para somatório, n! é o fatorial de n e x é o valor da variável de entrada fornecido pelo usuário.
O programa começa lendo o valor de x fornecido pelo usuário e calcula o valor da função exponencial usando a função exp() da biblioteca math.h,
que é implementada com alta precisão computacional. Em seguida, o programa inicia o cálculo da série de Taylor para a função exponencial.
O loop while é usado para adicionar termos sucessivos à série de Taylor até que o erro seja menor que 0,0001. 
O erro é calculado como a diferença entre o valor calculado pela série e o valor calculado pela função exp(). 
Se o erro for maior do que 0,0001, o próximo termo da série é adicionado à variável series_val.

O próximo termo da série é calculado como x^n/n!, onde n é o número do termo atual na série. O valor de n é incrementado a cada iteração do loop, o que significa que o próximo termo na série é sempre um termo maior do que o anterior.

O programa mantém um contador n para rastrear o número de termos adicionados à série de Taylor. Quando o erro é menor que 0,0001, o loop while termina e o programa imprime o valor de x, o valor calculado pela série, 
o valor dado pela função exp() e o número de termos utilizados na série.

Assim, o programa implementa a série de Taylor para calcular o valor da função exponencial e compara o resultado com o valor calculado pela função exp() para garantir a precisão da resposta.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese"); 

    double x, exp_val, series_val, error;
    int n, i;
    
    // Pedindo ao usuário para digitar o valor de x
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    
    // Calculando o valor real de e^x usando a função exp() da biblioteca math.h
    exp_val = exp(x);
    
    // Inicializando o valor calculado da série com o primeiro termo (1.0)
    series_val = 1.0;
    
    // Inicializando o erro como a diferença absoluta entre os valores real e calculado
    error = fabs(exp_val - series_val);
    n = 1;
    
    // Loop para adicionar termos à série até que a precisão desejada seja alcançada
    while(error > 0.0001) {
    	// Adicionando um termo à série usando a fórmula x^n/n!
        series_val += pow(x, n)/tgamma(n+1);
        // Atualizando o valor do erro
        error = fabs(exp_val - series_val);
        // Incrementando o contador de termos
        n++;
    }
    
    // Imprimindo os resultados na tela
    printf("Valor de x: %lf\n", x);
    printf("Valor calculado pela série: %lf\n", series_val);
    printf("Valor dado pela função exp: %lf\n", exp_val);
    printf("Número de termos utilizados na série: %d\n", n);
    
    return 0;
}

