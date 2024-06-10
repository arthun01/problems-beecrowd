#include <stdio.h>

int main(){
	int n;

	scanf("%d", &n);

	int arr[n];

	for(int n1 = 0; n1 < n; n1++){
		scanf("%d", &arr[n1]);
	}

	for(int c = 0; c < n; c++){
		if (arr[c] != 0){
			if ((arr[c] % 2 == 0) && (arr[c] > 0)){
				//par positivo
				printf("EVEN POSITIVE\n");
			}else if ((arr[c] % 2 != 0) && (arr[c] > 0)){
				//impar positivo
				printf("ODD POSITIVE\n");
			}else if ((arr[c] % 2 == 0) && (arr[c] < 0)){
				//par negativo
				printf("EVEN NEGATIVE\n");
			}else if ((arr[c] % 2 != 0) && (arr[c] < 0)){
				//impar negativo
				printf("ODD NEGATIVE\n");
			}
		}else{
			printf("NULL\n");
		}
	}

	return 0;
}
