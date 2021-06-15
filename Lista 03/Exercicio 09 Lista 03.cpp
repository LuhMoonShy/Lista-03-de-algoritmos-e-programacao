//9. Uma pesquisa sobre algumas características físicas da população de uma determinada região 
//coletou os seguintes dados, referentes a cada habitante:
//a) sexo (masculino, feminino);
//b) cor dos olhos (azuis, verdes, castanhos, pretos);
//c) cor dos cabelos (loiros, castanhos, pretos);
//d) idade em anos.
//Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade 
//igual a –1. Fazer um algoritmo que determine e escreva:
//a) a maior idade dos habitantes pesquisados;
//b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos 
//inclusive e que tenham olhos verdes e cabelos loiros.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>
int main() {
	char sexo, corOlho[10], corCabelo[10];
	int idade, contador=1, mulheres=0, maiorIdade,habitantes;
	float porcentagem;
		printf("Informe o total de habitantes:");
		scanf("%d", &habitantes);
		fflush(stdin);
	system("cls");
		printf("Para encerrar o programa digite '-1' no campo idade.\n");
		do {
			printf("Informe o sexo do habitante %d |m|ou|f|: \n", contador);
			scanf("%c", &sexo);
			sexo=tolower(sexo);
			fflush(stdin);			
			printf("Informe a cor dos olhos do habitante %d: |azul| |castanho| |verde| |preto|: \n", contador);
			scanf("%s", &corOlho);
			fflush(stdin);			
			printf("Informe a cor do cabelo do habitante %d: |loiro| |castanho| |preto|: \n", contador);
			scanf("%s", &corCabelo);	
			printf("Informe a idade da %d pessoa: \n", contador);
			scanf("%d", &idade);
			fflush(stdin);	
			if((idade>=18 || idade<=35) && (sexo=='f') && strcmp(corOlho, "verde") && strcmp(corCabelo, "loiro"));
				mulheres++;		
			if(contador==1)
				maiorIdade=idade;
			if(maiorIdade<idade) 
				maiorIdade=idade;		
			contador++;	
		} while(idade>=0);	
		porcentagem=(mulheres/habitantes) * 100; 		
	system("cls");
		printf("O/A habitante mais velho possui: %d anos.\n", maiorIdade);
		printf("A porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olhos verdes e cabelos loiros e de: %.2f %%", porcentagem);
return 0;	
}
