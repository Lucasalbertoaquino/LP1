#include<stdio.h>
#include<string.h>
int main(void){
    int i,j;
    FILE*p;
    p=fopen("exe4.txt","w");
    char vec[10][26];// vetor com 10 str com 25 caracter
    for (i=0;i<10;i++){
        printf("Digite a string a string %i de 10: ",i+1);
        scanf("%s",vec[i]);
    }
    for(j=0;j<10;j++){
        printf("%s\n",vec[j]);
    }
    //gravar no arq
    for(i=0;i<10;i++){
        for(j=0;j<strlen(vec[i]);j++){
            fputc(vec[i][j],p);
        }
    }
    fclose(p);
    printf("Arquivo gravado!");
return(0);
}
