#include <stdio.h>

#define QTD 5

int main(){
	int n, n1, d;

	scanf("%d", &n);

	if (n % 2 == 0){
		//par
		n1 = n + 1;
		printf("%d\n", n1);
	}else{
		//impar
		n1 = n;
		printf("%d\n", n1);
	}

	for(int x = 0; x < QTD; x++){
		printf("%d\n", n1+=2);
	}

	return 0;
}
