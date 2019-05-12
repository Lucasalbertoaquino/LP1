#include<stdio.h>
struct ponto{
    int x;
    int y;
    int z;
};
void preencheZ(struct ponto*ptr){
    (*ptr).z=(*ptr).z+10;
}
void main(void){
    struct ponto v1;
    v1.x=10;
    v1.y=0;
    v1.z=5;
    struct ponto v2={3,3,3};
    struct ponto v3;
    v3.x=0;
    v3.y=10;
    v3.z=0;
    preencheZ(&v1);
    preencheZ(&v2);
    preencheZ(&v3);
    printf("%d %d %d\n",v1.y,v2.y,v3.y);
    printf("%d %d %d\n",v2.x,v2.y,v2.z);
}
