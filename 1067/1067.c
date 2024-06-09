#include <stdio.h>

int main(){
	int n, n1, c;

	c = 1;
	scanf("%d", &n);

	if(n % 2 == 0){
		//par
		n1 = n - 1;
		printf("%d\n", c);
	}else{
		//impar
		n1 = n;
		printf("%d\n", c);
	}

	while(c < n1){
		c += 2;
		printf("%d\n", c);
	}


	return 0;
}
