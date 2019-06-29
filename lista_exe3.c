#include<stdio.h>

struct caixa{
    int valor;
    struct caixa*prox;
};

void exibe(struct caixa*t){
    while(t!=NULL){
        printf("%d",t->valor);
        t=t->prox;
    }
    printf("\n\n");
}

int main(void){
    struct caixa c5={5,NULL};
    struct caixa c4={7,&c5};
    struct caixa c3={9,&c4};
    struct caixa c2={3,&c3};
    struct caixa c1={1,&c2};

    struct caixa*cabeca=&c1;//cabeca

    exibe(cabeca);//exibe todos os valores

    c2.prox=&c4;//pula o elemento 9 ou seja nao o exibe mais
    exibe(cabeca);//imprime sem o elemento pulado

    c3.prox=&c1;
    cabeca=&c3;
    exibe(cabeca);


    //printf("%d %d %d %d %d",c1.valor,c1.prox->valor,c1.prox->prox->valor,c1.prox->prox->prox->valor,c1.prox->prox->prox->prox->valor);

return(0);
}
