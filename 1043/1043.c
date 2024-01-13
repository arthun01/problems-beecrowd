#include <stdio.h>

int main(){
	float a, b, c, per, area, ab, ac, bc;

	scanf("%f %f %f", &a, &b, &c);

	per = a + b + c;
	area = ((a + b) * c) / 2;
	ab = a - b;
	ac = a - c;
	bc = b - c;

	if ((ab < c) && (ac < b) && (bc < a)){
		printf("Perimetro = %.1f\n", per);
	}else{
		printf("Area = %.1f\n", area);
	}

	return 0;
}
