#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

	double a, b, c, x1, x2, delta, delta1;

	scanf("%lf %lf %lf", &a, &b, &c);

	delta = (b*b) -4 * (a) * (c);
	delta1 = sqrt(delta);

	x1 = (-b + delta1) / (2*a);
	x2 = (-b - delta1) / (2*a);

	if ((delta < 0) || (x1 == 0) || (x2 == 0) || (a == 0)){
		printf("Impossivel calcular\n");
	}else{
		printf("R1 = %.5lf\n", x1);
		printf("R2 = %.5lf\n", x2);
	}

	return 0;
}
