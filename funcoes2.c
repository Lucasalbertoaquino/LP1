#include<stdio.h>
/*faca um programa que calcule a area do retangulo com funcao*/
int main(void){
    float calcula_retan(float x,float y);//declara a funcao
    float x,y;//declara variaveis
    x=10;//atribui valor a x
    y=20;//atribui valor a y
    float a=calcula_retan(x,y);//chama a funcao e atribui seu reslt a a
    printf("A area eh: %5.2f",a);

return(0);
}
float calcula_retan(float base, float altura){
    float area=base*altura;
return(area);
}
