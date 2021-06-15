//Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo 
//outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma).
#include<stdio.h>
#include <stdlib.h>
int main(){
	int n1, n2, produto;
		printf("Informe o primeiro numero: ");
		scanf("%d", &n1);
		printf("Informe o segundo numero: ");
		scanf("%d", &n2);
	system("cls");	
		produto = 0;	
		for(int i = 0; i<n2;i++){
			produto = produto + n1;
		}	
		printf("O resultado da multiplicacao e %d.", produto);		
	return 0;
}

