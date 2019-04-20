#include<stdio.h>

void troca(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("o valor de x em troca(): %d\n",x);
    printf("o valor de y em troca(): %d\n",y);
}
int main(void){
    int a=5;
    int b=10;
    printf("o valor a antes da troca: %d\n",a);
    printf("o valor b antes da troca: %d\n",b);

    troca(a,b);
    printf("o valor de a depois da troca: %d\n",a);
    printf("o valor de b depois da troca: %d\n",b);
return(0);
}
