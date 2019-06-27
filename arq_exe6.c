#include<stdio.h>
//tirar duvidas em relacao a arq bin
struct pessoa{
    int idade;
    char nome[64];
    int peso;
};
void preeche_pessoa(struct pessoa*p){
    printf("Digite a idade: ");
    scanf("%d",&(*p).idade);
    printf("Digite o nome: ");
    scanf("%s",p->nome);
    printf("Digite o peso: ");
    scanf("%d",&(*p).peso);
}
void preenche_arq(FILE*a,struct pessoa*t){
    fwrite(t,sizeof(struct pessoa),1,a);
}
void le_arq(FILE*r,struct pessoa*n){
    fread(n,sizeof(struct pessoa),1,r);
}
void le_arq_printe(struct pessoa*k){
    printf("A sua idade : %d\n",k->idade);
    printf("O seu nome : %s\n",k->nome);
    printf("O seu peso: %d\n",k->peso);
}

int main(void){
    struct pessoa p[10];
    int i,j;
    FILE*pt=fopen("arq6.bin","wb");
    for(i=0;i<3;i++){
        preeche_pessoa(&p[i]);
        preenche_arq(pt,&p[i]);
    }
    fclose(pt);
    FILE*v=fopen("arq6.bin","rb");
    for(j=0;j<3;j++){
        le_arq(v,&p[j]);
        le_arq_printe(&p[j]);
    }
return(0);
}
