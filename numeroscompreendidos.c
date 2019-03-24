/*ler 2 numeros e exibir todos os numeros compreedidos entre eles*/
#include<stdio.h>
int main(void){
	int n1,n2,i;
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	//preciso fazer um laco for para percorrer
	for (i=n1;i<=n2;i++){
		printf("%d\t",i);
	}
	return(0);
}

