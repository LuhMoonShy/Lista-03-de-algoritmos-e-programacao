//Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA, 
//baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)
#include<stdio.h>
#include <stdlib.h>
int main(){
	int numero, fatN;
		printf("Informe um numero:");
		scanf("%d", &numero);
		fatN = 1;
	for(int contador=0;contador<numero;contador++){
		fatN=fatN*(numero - contador);
	}
		printf("O fatorial do numero que voce digitou e %d.",fatN);	
return 0;
}
