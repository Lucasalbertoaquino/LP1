#include<stdio.h>
#include<string.h>
void escreva_string(FILE*f,char*str){
    int j;
    for(j=0;j<strlen(str);j++){
        fputc(str[j],f);
    }
    fputc('\n',f);
}

int main(void){
    char vec[10][25];//10 str com 25 caracteres(matriz)
    int i;
    FILE*pt;
    pt=fopen("arquivo5.txt","w");
    for(i=0;i<10;i++){
        printf("Digite o seu nome: ");
        scanf("%s",vec[i]);
        escreva_string(pt,vec[i]);
    }
    fclose(pt);
return(0);
}
