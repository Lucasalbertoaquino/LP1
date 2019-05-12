#include<stdio.h>
struct personagem{
    int forca;
    int energia;
    int experiencia;
};
struct personagem preencheA(){
    struct personagem p;
    int f,e,ex;
    printf("Digite a forca: ");
    scanf("%d",&f);
    printf("\nDigite a energia: ");
    scanf("%d",&e);
    printf("\nDigite a experiencia: ");
    scanf("%d",&ex);
    p.forca=f;
    p.energia=e;
    p.experiencia=ex;
    return(p);
}
void main(void){
    struct personagem p1=preencheA();
    struct personagem p2=preencheA();
    printf("(%d %d %d) VS (%d %d %d)\n",p1.forca,p1.energia,p1.experiencia,p2.forca,p2.energia,p2.experiencia);
}
