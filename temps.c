/*Criar um vetor para guardar 50 temperaturas
int temps[50]; (Array)
As temperaturas variam entre -100 e 100
Ler as 50 temperaturas para o vetor
Calcular a média
Exibir a quantidade de leituras acima da média*/
#include<stdio.h>
int main(void){
	int temps[10],i,t,j,k,cont=0,soma=0,media;//cria o array com 50 posiçoes 
	for (i=0;i<10;i++){
		printf("Digite a temperatura %d de 10: ",i+1);
		scanf("%d",&t);
		temps[i]=t;
		cont+=1;
		soma+=t;
		media=soma/cont;
	}
	for (j=0;j<=10;j++){
		printf("%d\n",temps[j]); 
	}
	printf("A soma e: %d\n",soma);
	printf("\nA media das temperaturas e: %d\n",media);
	for (k=0;k<10;k++){
		if (temps[k]>=media){
			printf("As temperaturas acima da media são: %d\n",temps[k]);
		}
	}
	return(0);
}
