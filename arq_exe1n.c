#include<stdio.h>
#include<string.h>
int main(void){
	char string[26];
	int i;
	printf("Digite uma string: ");
	scanf("%s",string);
	FILE*p;
	p=fopen("exe1.txt","w");
	for(i=0;i<strlen(string);i++){
		fputc(string[i],p);
	}
	fclose(p);
return(0);
}
