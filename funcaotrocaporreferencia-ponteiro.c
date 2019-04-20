#include <stdio.h>
//ponteiros
void troca(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("O valor de x em troca eh: %d\n",*x);
    printf("O valor de y em troca eh: %d\n",*y);
}
int main(void){
    int a=5;
    int b=10;
    printf("O valor de a antes da troca:%d\n",a);
    printf("O valor de b antes da troca:%d\n",b);

    troca(&a,&b);
    printf("O valor de a depois de troca(): %d\n",a);
    printf("O valor de b depois de troca(): %d\n",b);

return(0);
}
