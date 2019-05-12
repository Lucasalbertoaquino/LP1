#include<stdio.h>
struct cadastro{
    char nome[50];
    int idade;
    int cpf;
    char regiao[50];
    //por que quando separamos os caracteres(space) no array o programa nao roda corretamente ?
};
void preenche(struct cadastro*p){
    printf("\nDigite seu nome: ");
    scanf("%s",&((*p).nome));
    printf("\nDigite sua idade: ");
    scanf("%d",&p->idade);
    printf("\nDigite seu cpf: ");
    scanf("%d",&((*p).cpf));
    printf("\nDigite o seu bairro: ");
    scanf("%s",p->regiao);
}

void main(void){
    struct cadastro c1;
    struct cadastro c2;
    preenche(&c1);
    preenche(&c2);
    printf("%s\t %d\t %d\t %s\n",c1.nome,c1.idade,c1.cpf,c1.regiao);
    printf("%s\t %d\t %d\t %s\n",c2.nome,c2.idade,c2.cpf,c2.regiao);
}
