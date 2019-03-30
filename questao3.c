#include<stdio.h>
int main(void){
	int aluno[5];
	int i,j,k,prova,soma=0,media,cont=0,contmedia;
	for (i=0;i<5;i++){
		printf("Digite a nota da prova do aluno %d de 5: ",i+1);
		scanf("%d",&prova);
		aluno[i]=prova;
		soma+=prova;
		cont+=1;
	}
	media=(soma/cont);
	printf("A media da turma e: %d\n",media);
	for (k=0;k<5;k++){
		if (aluno[k]>media){
			contmedia+=1;
			printf("%d\n",aluno[k]);
		}
	}
	printf("\nA quantidade de notas acima da media e %d",contmedia);
return(0);
}
