#include<stdio.h>
#include<string.h>
int main(void){
    char nome[10];
    int idade;
    printf("Digite seu nome: ");
    fgets(nome,10,stdin);//leitura de string pelo teclado
    //no gets e bom usar depois o comando fflush(stdin); para limpar o buffer
    //fgets(vetor,space vetor,formato de leitura
    //gets(nome); // funcao nao segura
    //scanf("%s",nome);
    //stdin(leitura feita pelo teclado de str
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("O seu nome e %s e voce tem %d anos.",nome,idade);

return(0);
}
