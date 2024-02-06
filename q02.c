/* 
Felipe de Almeida Bueno - RA: 2408759
Questão 02 da Prova.

23 - Escreva um programa para calcular a raiz quadrada de um número positivo, usando o roteiro abaixo, baseado no método de aproximações sucessivas de Newton:
Seja Y o número:
• a primeira aproximação para a raiz quadrada de Y é X1= Y/2;
• as sucessivas aproximações serão: Xn+1= Xn²+Y/2Xn;
• o programa deverá prever 20 aproximações.

Y,		{Número lido}
RAIZ,	{Valor da raiz quadrada}
I 		{Contador de aproximações
leia (Y)
RAIZ<-Y / 2
repita
 RAIZ<-( RAIZ2 + Y) / (2 x RAIZ)
 I<-I+ 1
 se I > 20
  então interrompa
 fim se
fim repita
escreva Y, RAIZ

Resolução:
1 - O usuário insere um número positivo y.

2 - O programa inicializa uma estimativa da raiz quadrada do número y como raiz = y / 2.0.

3 - O programa itera um loop 20 vezes para melhorar a estimativa da raiz quadrada:
a. Calcula uma nova estimativa da raiz quadrada usando o método de Newton, que envolve a fórmula xn = (raiz * raiz + y) / (2.0 * raiz), 
onde xn é a nova estimativa da raiz e raiz é a estimativa anterior.
b. Atualiza a estimativa da raiz para a nova estimativa calculada na etapa a.

4 - O programa exibe a estimativa final da raiz quadrada do número y.

Em resumo, o programa usa o método de Newton para estimar a raiz quadrada de um número positivo y. 
O método começa com uma estimativa inicial da raiz e, em seguida, itera várias vezes para melhorar essa estimativa, com base na fórmula mencionada acima. 
No final, o programa exibe a estimativa final da raiz quadrada do número y.
*/

#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese"); 

    double y, raiz, xn; // declara as variáveis y (entrada), raiz (estimativa) e xn (nova estimativa)
    int i; // declara a variável i (contador)

    printf("Digite um número positivo: "); // solicita que o usuário digite um número positivo
    scanf("%lf", &y); // lê o número digitado e armazena na variável y

    raiz = y / 2.0; // define a estimativa inicial da raiz como metade do número digitado
    for (i = 1; i <= 20; i++) { // loop que executa 20 vezes para melhorar a estimativa da raiz
        xn = (raiz * raiz + y) / (2.0 * raiz); // calcula a nova estimativa da raiz utilizando o método de Newton
        raiz = xn; // atualiza a estimativa da raiz para a nova estimativa
    }

    printf("A raiz quadrada de %g é %g\n", y, raiz); // exibe a estimativa final da raiz

    return 0; 
}

		
		
		
		
