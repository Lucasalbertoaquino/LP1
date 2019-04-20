#include <stdio.h>
int main(void){
    int x;
    x=100;
    printf("%i\n",x);// acessa o valor de x
    printf("%i\n\n",&x); //acessa o ENDEREÇO de memoria de x
    printf("Exemplo com variaveis....\n");
    int a=10;
    int b=a;
    a=50;// sobrescreve o valor antigo de a
    printf("%i %i \n\n",a,b);
    printf("Exemplo com ponteiros....\n\n");
    int v=60;//cria a variavel
    int *p; //cria um ponteiro que aponta p/ um inteiro qualquer
    p=&v;// agora o ponteiro esta apontando p/ o endereço de memoria de v
    printf("vejamos o que esta acontencedo...\n\n");
    printf("o valor de v eh %d\n",v);
    printf("o valor do endereco de memoria eh %d\n",&v);
    printf("o ponteiro eh %d\n",p);
    printf("o valor do ponteiro eh %d\n\n",*p);
    printf("vamos alterar o valor de uma variavel atraves de ponteiros\n");
    int t=20;
    *p=t; // o valor do ponteiro recebe o novo que foi criado na variavel e como ele estava apontando p/ o anterior sobrescreve o da variavel anterior
    printf("%d %d",v,t);

return(0);
}
