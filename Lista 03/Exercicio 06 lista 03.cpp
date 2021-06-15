//Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média 
//das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os 
//resultados solicitados quando for fornecida uma nota negativa.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	float notas=0, notasF=0, notasM=0, mediaF=0, mediaM=0;
	int alunos, feminino = 0, masculino = 0;
	char sexo;
		printf("Informe o total de alunos da turma: ");
		scanf("%d", &alunos);
		fflush(stdin);
    system("cls");
		printf("Informe o sexo de cada aluno(a) e em seguida sua nota.\n");
	system("pause");
	system("cls");	
		for (int i = 1; i <= alunos; i++){
		   do{
				printf("\nInforme o sexo do aluno(a) %d (masculino (M) ou feminino (F)):", i);
	    		scanf("%c", &sexo);
	    		fflush(stdin);
	    		sexo = toupper(sexo); 
	   		}while (sexo !='F' && sexo !='M');       
			do{ 
		    	printf("\nInforme a nota do aluno(a) (0 a 10): ");
				scanf("%f", &notas);
				fflush(stdin);
			}while(notas < 0 &&  notas > 10);	
				if (sexo == 'F'){ 
	    		feminino++; 
		    	notasF = notasF + notas;
				}
				else
				if (sexo == 'M'){ 
				masculino++; 
				notasM = notasM + notas;
				} 
		}
	system("cls");
		mediaF = notasF / feminino;
		mediaM = notasM / masculino;	   
		printf ("A media de notas das meninas da turma e %.1f.\n", mediaF);
		printf ("A media de notas dos meninos da turma e %.1f", mediaM);
	return 0; 
}
