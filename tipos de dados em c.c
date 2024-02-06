/*
https://www.geeksforgeeks.org/data-types-in-c/
----------------------------------------------

Data Type 							Memory (bytes) 	Range 														Format Specifier 			
--------------------------------------------------------------------------------------
short int 							2 							-32,768 to 32,767 								%hd 			
unsigned short int 			2 							0 to 65,535 											%hu 			
unsigned int 						4 							0 to 4,294,967,295 								%u 			
int 										4 							-2,147,483,648 to 2,147,483,647 	%d 			
long int 								4 							-2,147,483,648 to 2,147,483,647 	%ld 			
unsigned long int 			4 							0 to 4,294,967,295 								%lu 			
long long int 					8 							-(2^63) to (2^63)-1 							%lld 			
unsigned long long int 	8 							0 to 18,446,744,073,709,551,615 	%llu 			
signed char 						1 							-128 to 127 											%c 		
unsigned char 					1 							0 to 255 													%c 			
float 									4 																								%f 		
double 									8 																								%lf 
long double 						16 																								%Lf 
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main() {
// https://www.tutorialspoint.com/cprogramming/c_data_types.htm#
    printf("limite maximo char - CHAR_MAX..................: %22d\n", CHAR_MAX);
    printf("limite minimo char - CHAR_MIN..................: %22d\n", CHAR_MIN);
    printf("limite maximo int -INT_MAX.....................: %22d\n", INT_MAX); 
    printf("limite minimo int -INT_MIN.....................: %22d\n", INT_MIN); 
    printf("limite maximo long -LONG_MAX...................: %22ld\n",LONG_MAX); 
    printf("limite minimo long -LONG_MIN...................: %22ld\n",LONG_MIN); 
    printf("limite maximo signed char - SCHAR_MAX..........: %22d\n", SCHAR_MAX);
    printf("limite minimo signed char -SCHAR_MIN...........: %22d\n", SCHAR_MIN); 
    printf("limite maximo signed short - SHRT_MAX..........: %22d\n", SHRT_MAX);
    printf("limite minimo signed short SHRT_MIN ...........: %22d\n", SHRT_MIN);- 
    printf("limite maximo unsigned char - UCHAR_MAX........: %22d\n", UCHAR_MAX);
    printf("limite maximo unsigned int UINT_MAX............: %22u\n", UINT_MAX);- 
    printf("limite maximo unsigned long - ULONG_MAX........: %22lu\n", ULONG_MAX);
    printf("limite maximo unsigned short -USHRT_MAX........: %22d\n", USHRT_MAX); 
		printf("limite maximo long long -LLONG_MAX.............: %22lld\n", LLONG_MAX); 
		printf("limite minimo long long - LLONG_MIN............: %22lld\n", LLONG_MIN);
		printf("limite maximo unsigned long long - ULLONG_MAX..: %22llu\n", ULLONG_MAX);

    printf("limite maximo float - FLT_MAX..................: %22g\n", (float) FLT_MAX);   //%g imprime o valor em notação científica
    printf("limite minimo float - FLT_MIN..................: %22g\n", (float) FLT_MIN);   //%g imprime o valor em notação científica
    printf("limite maximo float negativo - -FLT_MAX........: %22g\n", (float) -FLT_MAX);  //%g imprime o valor em notação científica
    printf("limite minimo float negativo - -FLT_MIN........: %22g\n", (float) -FLT_MIN);  //%g imprime o valor em notação científica
    printf("limite maximo double - DBL_MAX.................: %22g\n", (double) DBL_MAX);  //%g imprime o valor em notação científica
    printf("limite minimo double - DBL_MIN.................: %22g\n", (double) DBL_MIN);  //%g imprime o valor em notação científica
    printf("limite maximo double negativo - -DBL_MAX.......: %22g\n", (double) -DBL_MAX); //%g imprime o valor em notação científica
    printf("limite minimo double negativo - -DBL_MIN.......: %22g\n", (double) -DBL_MIN); //%g imprime o valor em notação científica
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}