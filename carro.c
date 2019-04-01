/*Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.*/
#include<stdio.h>
int main(void){
	float velocidade;
	printf("Digite a velocidade atual do veiculo(em milhas): ");
	scanf("%f",&velocidade);
	velocidade*=1.6;
	if (velocidade<80){
		printf("Acelere!\n");
	}
	else if(velocidade<100){
	printf("Mantanha!\n");
	}
	else{
		printf("Desacelere!\n");
	}
return(0);
}
