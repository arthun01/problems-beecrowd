#include <stdio.h>

int main(){
	int a, b;
	float ql;

	scanf("%d %d", &a, &b);

	ql = (a*b)/12.0;

	printf("%.3f\n", ql);

	return 0;
}
