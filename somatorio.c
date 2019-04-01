#include <stdio.h>
int main(void){
	int i, n, a, soma=0;
	printf("Entre com N: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
	a=(i*i);
	soma+=a;
	}
	printf ("Somatorio: %d\n", soma);
return (0);
}
