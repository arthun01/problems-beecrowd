#include <stdio.h>

int main(){
	int a, b;
	float total, cods[6];

	cods[1] = 4.00;
	cods[2] = 4.50;
	cods[3] = 5.00;
	cods[4] = 2.00;
	cods[5] = 1.50;

	scanf("%d %d", &a, &b);

	total = cods[a] * b;

	printf("Total: R$ %.2f\n", total);

	return 0;
}
