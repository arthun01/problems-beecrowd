#include <stdio.h>

int main(){
	int n, n1;

	scanf("%d", &n);

	int res[n];

	n1 = 1;

	while (n1 <= n){
		scanf("%d", &res[n1]);
		n1 += 1;
	}

	n1 = 1;

	while (n1 <= n){
		printf("resposta %d: %d\n", n1, res[n1]);
		n1 += 1;
	}

	return 0;

}
