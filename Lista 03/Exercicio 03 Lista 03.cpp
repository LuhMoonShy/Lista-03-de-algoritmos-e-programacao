//Faça um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repetição 
//enquanto.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int menor,contador,altura;
		contador = 1;
		while(contador<=10){
			printf("Informe a altura em centimetros: ");
			scanf("%d",&altura);
			fflush(stdin);
			if(altura<30){
				printf("Altura invalida! Favor informar a altura em centimetros: ");
				scanf("%d", &altura);
				fflush(stdin);
			}
			else {
				if(contador == 1)
					menor = altura;
				if(menor > altura)
					menor = altura;
			}
			contador++;
		}
	system("cls");	
		printf("\nA menor altura informada e %d!\n",menor);
	return 0;
}
