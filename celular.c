/*Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.*/
#include<stdio.h>
int main(void){
	float celular=1.00;
	printf("Digite o valor do celular(em dolares): ");
	scanf("%f",&celular);
	celular*=3.17;
	printf("O celular custa em R$: %5.2f\n",celular);
	if (celular>1000){
		printf("Não eh um bom negocio!\n");
	}
	else{
		printf("eh um bom negocio!\n");
	}
return(0);
}
