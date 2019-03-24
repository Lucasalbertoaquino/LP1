#include<stdio.h>
int main(void){
	int dias;
	float anos;
	printf("entre com o numero de dias: ");
	scanf("%d",&dias);
	anos=dias/365.25;
	printf("\n %d dias equivalem a %5.2f anos.\n",dias,anos);
return (0);
} 
