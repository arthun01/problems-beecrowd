#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	float x1, y1, x2, y2, dis, form;

	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	form = ((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1));

	dis = sqrt(form);

	printf("%.4f\n", dis);

	return 0;
}
