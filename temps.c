/*Criar um vetor para guardar 50 temperaturas
int temps[50]; (Array)
As temperaturas variam entre -100 e 100
Ler as 50 temperaturas para o vetor
Calcular a média
Exibir a quantidade de leituras acima da média*/
#include<stdio.h>
int main(void){
	int temps[10],i,t,j;//cria o array com 50 posiçoes 
	for (i=0;i<=10;i++){
		printf("Digite a temperatura %d de 10: ",i+1);
		scanf("%d",t);
		temps[i]=t;
	}
	for (j=0;j<=10;j++){
		printf("%d",temps[j]);
	}
	return(0);
}
