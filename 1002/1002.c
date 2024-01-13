#include <stdio.h>

int main(){
	const double n = 3.14159;
	double area, raio;

	scanf("%lf", &raio);

	area = n * (raio * raio);

	printf("A=%.4lf\n", area);

	return 0;
}
