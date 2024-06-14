#include <stdio.h>

int main(){
	int n;

	scanf("%d", &n);

	printf("1 1 1\n");

	for(int x = 1; x < n; x++){
		printf("%d %d %d\n", x+1, (x+1)*(x+1), (x+1)*(x+1)*(x+1));
	}

	return 0;
}
