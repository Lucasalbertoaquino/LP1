#include<stdio.h>
#include<string.h>

struct personagem{
    char nome[50];
    int forca;
    int energia;
    int experiencia;
};

void main(void){
    struct personagem p1;
    struct personagem p2;
    printf("Nome: ");
    scanf("%s",p1.nome);
    strcpy(p2.nome,p1.nome);//copia o nome de p1 para p2
    //strncpy(p2.nome,p1.nome,strlen(p1.nome));//copia exatamente ate a qtd do primeiro
    printf("%s %s\n",p1.nome,p2.nome);
}
