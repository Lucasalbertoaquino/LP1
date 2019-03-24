/* crie um programa que carrega uma matriz inteira com os números de 0 a 99*/
#include <stdio.h>
int main(void){
	int matriz[100],i,j; // cria o vetor com 100 posiçoes
	for (i=0;i<=99;i++){
		matriz[i]=i;// add cada numero variando a matriz unidimensional
	}
	for (j=0;j<=99;j++){
		printf("%d\t",matriz[j]);// imprime os valores no array
	}
	return(0);
}
