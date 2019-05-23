#include<stdio.h>
struct preco{
    int sub;
    union {
        float reais;
        float dolar;
        float euro;
    };
};
void pergunta(struct preco*pe){
    printf("Digite 1 para Reais\nDigite 2 para dolar\nDigite 3 para Euro\n");
    printf("Digite uma das opcoes acima: ");
    scanf("%d",&pe->sub);
}
void exibe(struct preco*p){
    switch (p->sub){
        case 1:
            //printf("Digite o valor em Reais: ");
            //scanf("%f",&p->reais);
            printf("Valor atual em reais: %5.2f",p->reais);
            break;
        case 2:
            //printf("Digite o valor em Dolar: ");
            //scanf("%f",&p->dolar);
            printf("O valor atual em Dolar: %5.2f ",p->dolar);
            break;
        case 3:
            //printf("Digite o valor em Euro: ");
            //scanf("%f",&p->euro);
            printf("O valor atual em Euro: %5.2f\n",p->euro);
            break;
        default:
            printf("Erro 404\n");
    }
}
void altera(struct preco*a){
    float pa;
    printf("\nDigite um valor: ");
    scanf("%f",&pa);
    printf("Digite 1 para reias\nDigite 2 para Dolar\nDigite 3 para Euro\n");
    printf("Digite uma das opcoes acima: ");
    scanf("%d",&a->sub);
    switch(a->sub){
        case 1:
            printf("O valor convertido em reais: %5.2f",pa*2);
            a->reais=pa*2;
            break;
        case 2:
            printf("O valor convertido em dolar: %5.2f",pa*5);
            a->dolar=pa*5;
            break;
        case 3:
            printf("O valor convertido em Euro: %5.2f",pa*10);
            a->euro=pa*10;
            break;
        default:
            printf("Não e possivel converter");
    }
}
int main(void){
    struct preco p1;
    pergunta(&p1);
    exibe(&p1);
    altera(&p1);
    exibe(&p1);
return(0);
}
