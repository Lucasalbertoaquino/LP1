#include<stdio.h>
#include<string.h>
union pessoa{
    int cpf;
    int rg;
    char nome[50];
};

void main(void){
    union pessoa a;
    union pessoa b;
    union pessoa c;
    a.cpf=1234656;
    b.rg=155255151;
    strcpy(c.nome,"Lucas Alberto");
    //printf("%d %d %s",a.cpf,b.rg,c.nome);
}
