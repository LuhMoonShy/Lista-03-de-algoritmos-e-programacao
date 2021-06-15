//Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de 
//piadas. Estarão concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos. A 
//quantidade de juízes será definida no dia da apuração e para cada juiz o algoritmo solicitará a 
//nota para cada candidato. A nota poderá variar de 0 (zero) a 100(cem). O algoritmo deverá 
//apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do 
//vencedor após o voto de todos os juízes.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i= 1,nota = 0, nota1 = 0, nota2 = 0, nota3 = 0, maiorNota, juizes;
	char finalista1[30], finalista2[30], finalista3[30], vencedor[30];	
    	printf("Informe a quantidade de juizes presentes: ");
    	scanf("%d", &juizes);
    	fflush(stdin);	
		printf("Informe o nome do(a) finalista 1: ");
		fgets(finalista1, 30, stdin);
		fflush(stdin);	
		printf("Informe o nome do(a) finalista 2: ");
		fgets(finalista2, 30, stdin);
		fflush(stdin);	
		printf("Informe o nome do(a) finalista 3: ");
		fgets(finalista3, 30, stdin);
		fflush(stdin);	
	system("cls");
		do{
			printf("Juiz %d,informe a sua nota para o(a) finalista %s:\n", i, finalista1);
			scanf("%d", &nota);
			fflush(stdin);			
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida,tente novamente!");
				}
			}while(nota<0 || nota>100);			
			nota1= nota1 + nota;			
			printf("Juiz %d,informe a sua nota para o(a) finalista %s:\n", i, finalista2);
			scanf("%d", &nota);
			fflush(stdin);			
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida, tente novamente!");
				}
			}while(nota<0 || nota>100);			
			nota2= nota2 + nota;			
			printf("Juiz %d,informe a sua nota para o(a) finalista %s:\n", i, finalista3);
			scanf("%d", &nota);
			fflush(stdin);			
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida, tente novamente!");
				}
			}while(nota<0 || nota>100);			
			nota3= nota3 + nota;
			i++;
		}while(i <= juizes);		
		if (nota1 > nota2 && nota1> nota3){
			strcpy(vencedor, finalista1);
			maiorNota = nota1;
		}
		else if(nota2 > nota1 && nota2 > nota3){
				strcpy(vencedor, finalista2);
				maiorNota = nota2;
			}
	    	else if(nota3 > nota1 && nota3 > nota2){
	    			strcpy(vencedor, finalista3);
					maiorNota = nota3;
				}					
		printf("\nNota do finalista 1 (%s): %d\n", finalista1,nota1);
		printf("\nNota do finalista 2 (%s): %d\n", finalista2,nota2);
		printf("\nNota do finalista 3 (%s): %d\n", finalista3,nota3);
		printf("\nO vencedor do concurso foi: %s, com o total de %d pontos! ", vencedor, maiorNota);					
	return 0;
}
