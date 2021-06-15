//Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido 
//pelo usuário.
#include<stdio.h>
#include <stdlib.h>
int main(){
	int N = 0;
	float H = 0;	
	int contador = 1;
		printf("Informe o numero: ");
		scanf("%d", &N);
		while(contador <= N){
			H=H+(1.0/contador);
		 contador++;
		}
		printf("O valor de H e: %.4lf\n",H);	
	return 0;
}
