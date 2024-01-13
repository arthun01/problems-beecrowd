#include <stdio.h>

int main(){
	double a, b, pa, pb, media;

	scanf("%lf %lf", &a, &b);

	pa = 3.5;
	pb = 7.5;

	media = ((a * pa) + (b * pb)) / (pa + pb);

	printf("MEDIA = %.5lf\n", media);

	return 0;
}
