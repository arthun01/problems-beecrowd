//ler tres valores na primeira linha
//ler tres valores na segunda linha
//resultado é (b*c)+(e*f)

#include <stdio.h>

int main(){
	int a, b, d, e;
	float c, f, total;

	scanf("%d %d %f", &a, &b, &c);
	scanf("%d %d %f", &d, &e, &f);

	total = (b*c)+(e*f);

	printf("VALOR A PAGAR: R$ %.2f\n", total);

	return 0;
}
