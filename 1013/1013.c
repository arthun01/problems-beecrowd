#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c, maior_ab;

	scanf("%d %d %d", &a, &b, &c);

	maior_ab = ((a+b+abs(a-b)))/2;

	if (maior_ab > c){
		printf("%d eh o maior\n", maior_ab);
	}else{
		printf("%d eh o maior\n", c);
	}

	return 0;
}
