#include<stdio.h>
//faca um programa que peca um fatorial de um num
int main(void){
    int fatorial(int a);
    int a,r;
    printf("Digite um numero para o calculo de fatorial: ");
    scanf("%d",&a);
    r=fatorial(a);
    printf("O fatorial de %d eh: %d\n",a,r);
return(0);
}
int fatorial(int x){
    int result;
    if (x==0){
        result=1;
    }
    else{
        result=x*fatorial(x-1);//usa a mesma funcao varias vezes(recursividade), ou seja ela abre varias ate retornar 0
    }
    return(result);
    }

