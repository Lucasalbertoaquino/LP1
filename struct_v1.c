#include<stdio.h>
#include<string.h>
struct ficha{
    char nome[50];
    float peso;
    int idade;
}typedef ficha;//nomeia o tipo da estrutura para ficha
//estrutura
void main(void){
    ficha f; //seria o mesmo de fazer struct ficha f--> ficha agora e um tipo com na struct
    //f.nome="lucas alberto";--> nao podemos pasar p/ um char assim, por isso temos que usar uma funcao e importar a biblioteca
    strcpy(f.nome,"Lucas Alberto");
    f.peso=72;
    f.idade=19;
    printf("Nome: %s, peso %5.2f, idade: %d",f.nome,f.peso,f.idade);
}
