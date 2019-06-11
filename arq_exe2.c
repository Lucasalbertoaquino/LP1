#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(void){
	
	//exercicio 1+2 no mesmo arq
	char s[26];
	int i;
	printf("Digite uma string: ");
	fgets(s,26,stdin);//aqui podemos ler as strings com o espaços
	//scanf("%s",s);//aqui se temos um espaço ele nao le
	FILE*p;
	p=fopen("exe2.txt","w");
	for(i=0;i<strlen(s);i++){
		fputc(s[i],p);//escreve no arq caractere a caractere
	}
	fclose(p);
	
	//leitura do arq
	FILE*pt;
	pt=fopen("exe2.txt","r");
	if (pt==NULL){
		printf("Erro ao abrir o arquivo");//msg de erro ao abrir o arquivo
		exit(0);//import stdlib
	}
	char l[26];//
	/*
	while(fgets(l,26,pt)!=NULL){
		printf("%s",l);//outra maneira de fazer
	}
	*/
	fread(l,sizeof(char),25,pt);
	printf("%s",l);
	fclose(pt);
}

