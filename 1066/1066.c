#include <stdio.h>

int main(){
	int arr[5], even = 0, odd = 0, pos = 0, neg = 0;

	for(int n = 0; n < 5; n++){
		scanf("%d", &arr[n]);

		if(arr[n] > 0)
			pos++;
		else if(arr[n] < 0)
			neg++;

		if(arr[n] % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("%d valor(es) par(es)\n", even);
	printf("%d valor(es) impar(es)\n", odd);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);

	return 0;
}
