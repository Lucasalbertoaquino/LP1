#include <stdio.h>
void soma(int x,int y){
    int total;
    total=x+y;
    printf("A soma e: %d",total);
}
int main(void){
    int a,b,r;
    scanf("%d",&a);
    scanf("%d",&b);
    soma(a,b);
return(0);
}
