#include <stdio.h>
#define QTD 10000

int main(){
	int n;

	scanf("%d", &n);

	for(int x = 1; x <= QTD; x++){
		if(x % n == 2){
			printf("%d\n", x);
		}
	}

	return 0;
}
