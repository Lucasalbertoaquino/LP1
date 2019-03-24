#include <stdio.h>
/* usando if, faça um programa que se o usuario escolher 5 ele acerte*/
int main(void){
	int a;
	printf("escolha um numero entre 1 e 9: ");
	scanf("%d",&a);
	if (a==5) {
		printf("parabens voce acertou!!\n");
	}	
	else {
		printf("voce errou,tente novamente!\n");
	}
	return 0;
}
