#include<stdio.h>
struct atleta{
    char nome[10];
    int forca;
    int velocidade;
    int peso;
    float altura;
};
void preenche(struct atleta*ptr){
    printf("\nDigite o nome: ");
    scanf("%s",ptr->nome);
    printf("\nDigite a forca: ");
    scanf("%d",&(*ptr).forca);
    printf("\nDigite a velocidade: ");
    scanf("%d",&ptr->velocidade);
    printf("\nDigite o peso:");
    scanf("%d",&(*ptr).peso);
    printf("\nDigite a altura: ");
    scanf("%f",&ptr->altura);
}
void printe(struct atleta*a){
    printf("\nPara o atleta %s\n",a->nome);
    printf("A sua forca eh: %d \n",a->forca);
    printf("A sua velocidade eh: %d \n",a->velocidade);
    printf("A seu peso eh: %d\n",a->peso);
    printf("A sua altura eh: %5.2f",a->altura);
}
void main(void){
    struct atleta a1;
    struct atleta a2;
    struct atleta a3;
    preenche(&a1);
    preenche(&a2);
    preenche(&a3);
    printe(&a1);
    printe(&a2);
    printe(&a3);
}
