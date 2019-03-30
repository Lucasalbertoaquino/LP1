#include<stdio.h>
int main(void){
	int num;
	int soma=0;
	printf("escolha um numero: ");
	scanf("%d",&num);
	while (num>0){
		soma+=num;
		num-=1;
	}
	printf("somou %d\n",soma);
return(0);
}
