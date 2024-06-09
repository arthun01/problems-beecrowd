#include <stdio.h>

int main(){
	int n, cont;

	cont = 2;

	scanf("%d", &n);

	while(cont <= n){
		printf("%d^2 = %d\n", cont, cont*cont);
		cont += 2;
	}

	return 0;
}
