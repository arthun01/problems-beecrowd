#include <stdio.h>

int fatorial(int N){
	if(N == 0){//0! = 1
		return 1;
	}else{//N! = N * (N - 1)!
		return N * fatorial(N-1);
	}
}

int main(){
	int x;
	scanf("%d", &x);

	printf("%d\n", fatorial(x));

	return 0;
}
