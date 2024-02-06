/*
35. Calcular o sal�rio final de um trabalhador, 
recebendo a quantidade de horas trabalhadas, a
quantidade de horas extras, quantidade de horas 
ausentes e o valor do sal�rio m�nimo, sabendo que:
a)as horas trabalhadas e ausentes valem 4% do 
sal�rio m�nimo;
b)as horas extras valem 50% a mais do que as 
horas trabalhadas;
c)o sal�rio final � igual a soma das horas 
trabalhadas com as hora extras, descontadas as horas
ausentes e 11% de INSS.
--------------------------------------------------
entradas de dados:
  quantidade de horas trabalhadas - qht
  quantidade de horas extras - qhe
  quantidade de horas ausentes - qha
  valor do sal�rio m�nimo - sm
sa�das de dados:
  sal�rio final do trabalhador - sf
processamento  
	valor horas trab (vht) = qht * sm * 0.04	
	valor horas ausentes (vha) = qha * sm * 0.04
	valor horas extras (vhe) = qhe * sm * 0.06
  sf = (vht + vhe - vha) * 0.89
--------------------------------------------------  
real qht, qhe, qha, sm, sf, vht, vha, vhe

escreva("Informe a quantidade de horas trabalhadas: ")
leia(qht)
escreva("Informe a quantidade de horas extras: ")
leia(qhe)
escreva("Informe a quantidade de horas ausentes: ")
leia(qha)
escreva("Informe o valor do sal�rio m�nino: ")
leia(sm)

vht = qht * sm * 0.04	
vha = qha * sm * 0.04
vhe = qhe * sm * 0.06
sf = (vht + vhe - vha) * 0.89

escreva("O sal�rio final � de ",sf)
--------------------------------------------------
*/
#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");

  float qht, qhe, qha, sm, sf, vht, vha, vhe;

  printf("Informe a quantidade de horas trabalhadas: ");
  scanf("%f",&qht);
  printf("Informe a quantidade de horas extras: ");
  scanf("%f",&qhe);
  printf("Informe a quantidade de horas ausentes: ");
  scanf("%f",&qha);
  printf("Informe o valor do sal�rio m�nino: ");
  scanf("%f",&sm);

  vht = qht * sm * 0.04;
  vha = qha * sm * 0.04;
  vhe = qhe * sm * 0.06;
  sf = (vht + vhe - vha) * 0.89;

  printf("O sal�rio final � de %2.2f",sf);	
	
	return 0;
}














