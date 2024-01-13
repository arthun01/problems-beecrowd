#include <stdio.h>

int main(){
	double pi, volume, raionovo, raio;

	pi = 3.14159;

	scanf("%lf", &raio);
	raionovo = raio*raio*raio;

	volume = (4/3.0) * pi * raionovo;

	printf("VOLUME = %.3lf\n", volume);

	return 0;
}
