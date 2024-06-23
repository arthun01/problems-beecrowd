#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);

	float arr[3], media[N];
	for(int c = 0; c < N; c++){
		scanf("%f", &arr[0]);
		scanf("%f", &arr[1]);
		scanf("%f", &arr[2]);

		media[c] = ((arr[0] * 2) + (arr[1] * 3) + (arr[2] * 5))/10;
	}

	for(int x = 0; x < N; x++){
		printf("%.1f\n", media[x]);
	}

	return 0;
}
