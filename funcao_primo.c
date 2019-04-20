#include<stdio.h>
int main(void){
    int eh_primo(int n);
    int a,b;
    printf("Digite um numero: ");
    scanf("%d",&a);
    b=eh_primo(a);
    if (b==2){
        printf("O numero %d eh primo!\n",a);
    }
    else{
        printf("O numero %d nao eh primo\n",a);
    }
return(0);
}

int eh_primo(int n){
    int cont=0,i;
    for (i=1;i<=n;i++){
        if (n%i==0){
            cont+=1;
        }
    }
    printf("%d\n",cont);
return(cont);
}
