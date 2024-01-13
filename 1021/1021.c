#include <stdio.h>
#include <math.h>

int main(){
	int c_cinq, c_vintecinco, c_dez, c_cinco, c_um;
	double n;
	int cem, cinq, vinte, dez, cinco, dois, um;

	scanf("%lf", &n);

	//calculo das notas
	cem = n / 100;
	n = fmod (n,100);

	cinq = n / 50;
	n = fmod(n,50);

	vinte = n / 20;
	n = fmod(n,20);

	dez = n / 10;
	n = fmod(n,10);

	cinco = n / 5;
	n = fmod(n,5);

	dois = n / 2;
	n = fmod(n,2);

	//calculo das moedas

	n = n * 100;

	um = n / 100;
	n = fmod(n,100);

	c_cinq = n / 50;
	n = fmod(n,50);

	c_vintecinco = n / 25;
	n = fmod(n,25);

	c_dez = n / 10;
	n = fmod(n, 10);

	c_cinco = n / 5;
	n = fmod(n,5);

	c_um = n / 1;
	n = fmod(n,1);

	//printando os resultados

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cem);
	printf("%d nota(s) de R$ 50.00\n", cinq);
	printf("%d nota(s) de R$ 20.00\n", vinte);
	printf("%d nota(s) de R$ 10.00\n", dez);
	printf("%d nota(s) de R$ 5.00\n", cinco);
	printf("%d nota(s) de R$ 2.00\n", dois);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", um);
	printf("%d moeda(s) de R$ 0.50\n", c_cinq);
	printf("%d moeda(s) de R$ 0.25\n", c_vintecinco);
	printf("%d moeda(s) de R$ 0.10\n", c_dez);
	printf("%d moeda(s) de R$ 0.05\n", c_cinco);
	printf("%d moeda(s) de R$ 0.01\n", c_um);



	return 0;
}

