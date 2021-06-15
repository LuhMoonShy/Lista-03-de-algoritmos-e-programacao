//Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que 
//seja lido um número negativo e mostrar a quantidade total de números lidos.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,contagem=0;
	float numero;
	   for(i=0;i<100;i++){
			printf("Informe um numero: ");
			scanf("%f",&numero);
			contagem = contagem  + 1;
			if(numero<0){
		system("cls");
				printf("Foi/Foram lido(s) no total %d numero(s).",contagem);
	   		return 0;
			}
	   }
	   printf("Foi/Foram lido(s) no total %d numero(s).",contagem);
return 0;
}
