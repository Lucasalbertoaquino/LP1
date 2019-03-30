#include<stdio.h>
int main(void){
	int a,b,maior,par;
	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	printf("Digite o segundo numero: ");
	scanf("%d",&b);
	if (a>b){
		maior=a;
	}
	else{
	maior=b;
	}
	while(maior>0){
		if (maior%2==0){
			par=maior;
			printf("%d\n",par);
			maior-=1;
		}
		else{
		maior-=1;
		}
	}
return(0);
}
