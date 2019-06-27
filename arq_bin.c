#include<stdio.h>
#include<string.h>
struct data{
    int dia;
    int mes;
    int ano;
};

void main(void){
    int v1=0x12345678;
    char v2[]="Lucas Alberto";
    struct data v3={11,7,18};

    FILE*f=fopen("arq.bin","wb");
    fwrite(&v1,sizeof(int),1,f);
    fwrite(v2,sizeof(char),strlen(v2),f);
    fwrite(&v3,sizeof(struct data),1,f);
    fclose(f);
    //declarar as variaveis do mesmo tipo das anteriores
    int t1;
    char t2[14];
    struct data t3;
    //ler o arquivo bin
    FILE*p=fopen("arq.bin","rb");
    fread(&t1,sizeof(int),1,p);
    fread(t2,sizeof(char),13,p);
    t2[13]='/0';//porque isso??
    fread(&t3,sizeof(struct data),1,p);//printando lixo de memoria???
    fclose(p);
    printf("%x %s (%d/%d/%d)\n",t1,t2,t3.dia,t3.mes,t3.ano);

}
