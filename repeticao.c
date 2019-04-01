/*Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de todos os números lidos.*/
#include <stdio.h>
int main(void){
	int soma=0,a;	
	while (1){
	printf("Digite um numero: ");
	scanf("%d",& a);
	soma+=a;
	if (a==0){
		break;
	}
}
	printf("A soma e : %d\n",soma);
return(0);
}
