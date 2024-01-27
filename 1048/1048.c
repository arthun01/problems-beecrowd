#include <stdio.h>

int main(){
	float val, nval, reajuste;
	int percent;

	scanf("%f", &val);

	if ((val > 0) && (val < 400.01)){
		percent = 15;
		nval = (val + (val * 0.15));
	}

	if ((val >= 400.01) && (val <= 800)){
		percent = 12;
		nval  = (val + (val * 0.12));
	}

	if ((val >= 800.01) && (val <= 1200.00)){
		percent = 10;
		nval = (val + (val * 0.10));
	}

	if ((val >= 1200.01) && (val <= 2000.00)){
		percent = 7;
		nval = (val + (val * 0.07));
	}

	if ((val > 2000)){
		percent = 4;
		nval = (val + (val * 0.04));
	}

	reajuste = nval - val;

	printf("Novo salario: %.2f\n", nval);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %%\n", percent);

	return 0;
}
