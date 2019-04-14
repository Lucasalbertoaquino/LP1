//#include<stdio.h>
//funcoes dentro de outras funcoes
/*faca um programa que devolva a soma de dois valores absolutos (funcoes)*/
#import <stdio.h>//podemos importar assim tbm
int main(void){
    int soma(int a,int b);
    int convert(int x);
    int num1,num2,s;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    s=soma(num1,num2);
    printf("A soma dos valores absolutos eh: %d",s);

return(0);
}
int soma(int a,int b){
    if (a<0){
        a=convert(a);
    }
    if (b<0){
        b=convert(b);
    }
    return a+b;//podemos retornar operacoes
}
int convert(int x){
    return x*(-1);//deixa absoluto caso for negativo
}
