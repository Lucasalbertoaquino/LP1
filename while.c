#include <stdio.h>
//programa que faz a media e continua enquanto o usuario digita 1
int main(void){
    float p1,p2,media,pergunta;
    do{
        printf("Digite a primeira nota: ");
        scanf("%f",&p1);
        printf("Digite a segunda nota: ");
        scanf("%f",&p2);
        media=(p1+p2)/2;
        printf("A sua media eh: %5.2f\n",media);
        printf("Digite 1 para continuar ou 2 para sair ");
        scanf("%f",&pergunta);
    }
    while(pergunta==2);
return(0);
}
