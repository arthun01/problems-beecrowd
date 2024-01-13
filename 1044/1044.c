#include <stdio.h>

int main(){
	int a, b, maior, menor;

	scanf("%d %d", &a, &b);

	if (a > b){
		maior = a;
		menor = b;
	}else{
		maior = b;
		menor = a;
	}

	if ((maior % menor) == 0){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}

	return 0;
}
