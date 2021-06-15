//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes 
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada 
//produto e calcule e escreva a identificação e o novo preço após o aumento. 
//Considere as seguintes situações:
//a) o mercador informa o número de produtos que possui antes de entrar com o preço 
//dos produtos
//b) o mercador informa produto a produto e você deve perguntar se tem mais algum 
//produto a ser calculado o aumento
//c) o preço do último produto fornecido pelo mercador é -1
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char resposta1[3],resposta2[3];
	int i=0,numProduto=1,quantProduto;
	char idproduto[40];
	float reajuste,precoProduto;
			printf("Informe quantos produtos irao passar pelo reajuste: ");
			scanf("%d",&quantProduto);
			fflush(stdin);
		while(strcmp(resposta2,"sim")!=1){
		system("cls");
			for(i=0;i<quantProduto;i++){
				printf("Informe o id do produto: ",numProduto);
				fflush(stdin);
				fgets(idproduto,40,stdin);
				printf("Informe o preco desse produto: ");
				scanf("%f",&precoProduto);
				fflush(stdin);
				reajuste = (precoProduto + (precoProduto*0.1));
				numProduto = numProduto + 1;	
				printf("Com o reajuste de 10 porcento o produto custara R$ %.2f.\n",reajuste);
				printf("\n");
				if(quantProduto>2){
					printf("Realizar novo calculo de reajuste? ? ");
					scanf("%s",&resposta1);
					if(stricmp(resposta1,"sim")!=0){
						printf("Fim do reajuste!");
					 return 0;
			 		}
				}
			}
		    printf("Deseja recalcular mais algum produto ? ");
			scanf("%s",&resposta2);
			fflush(stdin);
			if(strcmp(resposta2,"sim")!=0){
				printf("\nO preco do ultimo produto e de -1.\n");
			 return 0;
		  	} 
		}
return 0;
}
