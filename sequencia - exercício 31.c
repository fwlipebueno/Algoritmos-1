/*
31. Tendo como dados de entrada dois pontos quaisquer de um plano
cartesiano P(X1,Y1)e Q(X2,Y2) calcule e mostre a dist�ncia entre eles. 
A dist�ncia � dada pela f�rmula:
raiz((X2 - X1)^2 + (Y2 - Y1)^2)

1 - entradas de dados:
  ponto x de P
  ponto y de P
  ponto x de Q
  ponto y de Q
2 - sa�das de dados:
  dist�ncia entre P e Q
3 - processamento:
  obter os valores de x e y para P
	obter os valores de x e y para Q
	calcular a dist�ncia
	mostrar a dist�ncia calculada
4 - f�rmulas:
raiz((x2 - x1)^2 + (y2 - y1)^2)

em linguagem C devemos utilizar a fun��o pow(x,y).
pow elevada x a pot�ncia y

(x2 - x1)^2 --> pow(x2-x1,2.0)
	
(y2 - y1)^2 --> pow(y2-y1,2.0)

pow(pow(x2-x1,2.0) + pow(y2-y1,2.0),1.0/2.0) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
	float x1, y1, x2, y2, d;
	printf("Informa os valores de x e y para o ponto P, separados por / ");
	scanf("%f/%f",&x1,&y1);
	printf("Informa os valores de x e y para o ponto Q, separados por / ");
	scanf("%f/%f",&x2,&y2);
	d = pow(pow(x2-x1,2.0) + pow(y2-y1,2.0),1.0/2.0);
	printf("\nA distancia entre P e Q e %10.2f\n",d);
	system("pause");	
	return 0;
}
