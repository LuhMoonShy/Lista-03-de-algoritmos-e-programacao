//Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade 
//de frutas para cada tipo), sendo elas identificadas por meio de um n�mero.
//1 => ABACAXI
//2 => MA�A
//3 => PERA
//Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio, 
//lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
//Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui estes tr�s 
//tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est�
//dispon�vel e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (){
	int fruta;
		printf ("Escolha uma fruta:\n");
		printf("\n|1| - Abacaxi  |2|- Maca   |3|- Pera\n");
	system("pause");
	system("cls");
		printf("\nInforme o numero referente a sua escolha:\n");
		scanf("%d", &fruta);
		fflush(stdin);
	system("cls");
		if (fruta==0)
		  printf ("Fruta nao encontrada no sistema, tente novamente!");
		else {
			switch (fruta){
				case 1: printf ("Abacaxi!", fruta); 
			  	 break; 
				case 2: printf ("Maca!", fruta); 
				 break;
				case 3: printf ("Pera!", fruta); 
				 break;
				default: printf("Fruta nao encontrada no sistema, tente novamente!");  	
			}
		}
	return 0;
	}
