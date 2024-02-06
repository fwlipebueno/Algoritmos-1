/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 01 da Prova.

19 - Escreva um programa para calcular e escrever o valor do número π, com precisão de 0.0001, usando a série:
π= 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...

Para obter a precisão desejada, adicionar apenas os termos cujo valor absoluto seja maior ou igual a 0,0001.
	
	DENOMINADOR, {Valor do denominador}
	PARCELA,     {Parcela do somatório}
	PI,          {Valor do somatório para cálculo da PI}
	SINAL        {Sinal da parcela}
	DENOMINADOR<-1
	PI<-O
	SINAL<-1
	PARCELA<-4
	repita
 		se PARCELA < 0.0001
 		 então interrompa
 		fim se
 		PI<-PI + PARCELA x SINAL
 		DENOMINADOR<-DENOMINADOR + 2
 		SINAL<-SINAL x (-1)
 		PARCELA<-4 / DENOMINADOR
	fim repita
	escreva PI

Resolução:
O código implementa uma aproximação numérica para o valor de π através da série matemática π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + .... 
Tal série é uma forma de representar π como uma soma infinita de frações alternadas.

O programa calcula os termos dessa série em um loop do-while, adicionando apenas os termos cujo valor absoluto seja maior ou igual a 0,0001. 
O loop é executado até que o valor absoluto da parcela seja menor que 0,0001, momento em que ele é interrompido.

O denominador é inicializado como 1 e é incrementado de 2 em 2 para gerar os denominadores ímpares da série. 
A variável "sinal" é usada para alternar o sinal dos termos da série, começando com 1. 
A parcela é calculada como 4 dividido pelo denominador atual. 
A cada iteração, a parcela é adicionada ao acumulador "pi" multiplicada pelo sinal. 
O loop é interrompido quando a parcela se torna menor do que 0,0001.

Por fim, o valor aproximado de π é impresso na tela com a precisão de 4 casas decimais.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

	// Inicialização de variáveis
    int denominador = 1;
    double parcela, pi = 0, sinal = 1;

    // Loop para calcular o valor de pi
    do {
        // Cálculo da próxima parcela da série
        parcela = 4.0 / denominador;

        // Verifica se a parcela atual é menor que a precisão desejada
        if (parcela < 0.0001) {
            break; // Se sim, interrompe o loop
        }

        // Adiciona a parcela atual ao valor acumulado de pi
        pi += parcela * sinal;

        // Atualiza o denominador para o próximo termo da série
        denominador += 2;

        // Alterna o sinal da próxima parcela
        sinal *= -1;
    } while (1); // Loop infinito

    // Imprime o valor de pi com a precisão desejada
    printf("O valor de pi é: %.4f\n", pi);
    
    return 0;
}