#include<stdio.h>
struct personagem{
    int forca;
    int energia;
    int experiencia;
};
//ponteiro
void preencheB(struct personagem*p){
    printf("\nDigite a forca: ");
    scanf("%d",&((*p).forca));
    printf("\nDigite a energia: ");
    scanf("%d",&(p->energia));
    printf("\nDigite a experiencia: ");
    scanf("%d",&((*p).experiencia));
}
void main(void){
    struct personagem p1;
    preencheB(&p1);
    struct personagem p2;
    preencheB(&p2);
    printf("(%d %d %d) VS (%d %d %d) ",p1.forca,p1.energia,p1.experiencia,p2.forca,p2.energia,p2.experiencia);
}
