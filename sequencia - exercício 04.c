/*
4. Escreva um programa que calcule:
a) a area de um tri�ngulo
b) a �rea de um c�rculo
c) a �rea de um cubo
d) a �rea de um cilindro
Solicitar os dados necess�rios para calcular cada �rea, 
mostrando o resultado na tela

entradas de dados:
------------------
	tri�ngulo
		base, altura
	c�rculo
		raio
	cubo
		aresta
	cilindro
		raio, altura

sa�das de dados:
----------------
	�rea
		tri�ngulo
		c�rculo
		cubo
		cilindro					

processamento:
--------------
	obter a altura do tri�ngulo
	obter a base do tri�ngulo
	calcular a �rea do tri�ngulo
		�rea = base * altura / 2
	mostrar o valor calculado
		�rea (tri�ngulo)
-----------------------------------		
	obter o raio do c�rculo
	calcular a �rea do c�rculo
		�rea = 3.14 * raio^2
	mostrar o valor calculado
		�rea (c�rculo)
-----------------------------------				
	obter a aresta do cubo
	calcular a �rea do cubo
		�rea = aresta^2 * 6
	mostrar o valor calculado
		�rea (cubo)		
-----------------------------------						
	obter a altura do cilindro
	obter o raio do cilindro
	calcular a �rea do cilindro
		�rea = 2 * 3.14 * raio^2 + 2 * 3.14 * raio * altura
	mostrar o valor calculado
		�rea (cilindro)
-----------------------------------				
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
	float area, raio, base, altura, aresta;
	
	printf("\n----------------------------------------------");
	printf("\nCalcular a area de um triangulo");
	printf("\n----------------------------------------------");
	printf("\nDigite a base e a altura, separados\n");
	scanf("%f%f",&base,&altura);
	area = base * altura / 2;
	printf("\nA area do triangulo e %0.2f",area);
	
	printf("\n----------------------------------------------");
  printf("\nCalcular a area de um circulo");
	printf("\n----------------------------------------------");
	printf("\nDigite o raio do circulo\n");
	scanf("%f",&raio);
	area = M_PI * pow(raio,2.0);
	printf("\nA area do circulo e %0.2f",area);
	
	printf("\n----------------------------------------------");
  printf("\nCalcular a area de um cubo");
	printf("\n----------------------------------------------");
	printf("\nDigite a aresta do cubo\n");
	scanf("%f",&aresta);
	area = pow(aresta,2.0) * 6.0;
	printf("\nA area do cubo e %0.2f",area);
	
	printf("\n----------------------------------------------");
	printf("\nCalcular a area de um cilindro");
	printf("\n----------------------------------------------");
	printf("\nDigite a altura e o raio, separados por ENTER\n");
	scanf("%f%f",&altura,&raio);
	area = 2 * M_PI * pow(raio,2.0) + 2 * M_PI * raio * altura;
	printf("\nA area do cilindro e %0.2f",area);	
	
	return 0;
}

