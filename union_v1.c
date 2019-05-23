#include<stdio.h>
#include<string.h>
union angulo{
    float graus;
    float radianos;
};
void main(void){
    union angulo a;
    a.graus=5.6;
    a.radianos=8.0;
    printf("\n%.2f",a.radianos);
}
