//Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é 
//fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.
#include<stdio.h>
#include <stdlib.h>
int main(){
	int numero, fatN=1,contador=0;
		printf("Digite o numero: ");
		scanf("%d", &numero);
		while(contador < numero){
			fatN=fatN*(numero-contador);		
			contador++;
		}
	system("cls");
		printf("O fatorial do numero informado e %d.",fatN);
	return 0;
}
