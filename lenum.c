/* Faça um programa que leia dois numeros e diga qual e o maior*/
#include<stdio.h>
int main(void){
	int a,b;
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Digite o segundo numero: ");
	scanf("%d",&b);
	if (a>b){ 
		printf("o maior numero eh : %d\n",a);
	} else{
		printf("o maior numero eh: %d\n",b);
	}
return (0);
}
