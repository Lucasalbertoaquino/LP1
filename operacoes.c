/* operaçoes matematicas em c */
#include<stdio.h>

int main(){
	int a=5,b=2;
	printf("\n%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d X %d = %d",a,b,a*b);
	printf("\n%d // %d = %d",a,b,a/b); //divisao inteira
	printf("\n%d / %d = %5.2f\n",a,b,(float)a/b); //divisao facionaria
	return(0);
}

