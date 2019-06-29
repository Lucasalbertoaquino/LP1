#include<stdio.h>

struct caixa{
    int valor;
    struct caixa*prox;
};
void exibe(struct caixa*p){
    while(p!=NULL){
        printf("%d",p->valor);
        p=p->prox;
    }
}

int contem(struct caixa*lista,int valor){
    int r;
    int cont=0;
    while(lista!=NULL){
        //lista->valor;
        if (lista->valor==valor){
            r=lista->valor;
            printf("O elemento %d esta na posicao %d da lista!\n",valor,cont);
            return (r);
        }
        else{
            lista=lista->prox;
            printf("O elemento %d nao esta na posicao %d da lista!\n",valor,cont);
            cont+=1;
        }
    }
    return(0);
}

int main(void){
    int t1;
    struct caixa c3={8,NULL};
    struct caixa c2={3,&c3};
    struct caixa c1={5,&c2};
    struct caixa c0={1,&c1};

    struct caixa*cabeca=&c0;

    //exibe(cabeca);

    t1=contem(cabeca,5);
    printf("%d",t1);

return(0);
}
