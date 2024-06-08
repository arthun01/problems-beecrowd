#include <stdio.h>
#include <stdlib.h>

#define QTD 3

void insertionSort(int arr[], int N){
	int i, j, aux;

	for(i = 1; i < N; i++){
		aux = arr[i];
		for(j = i; (j > 0) && (aux < arr[j - 1]); j--){
			arr[j] = arr[j - 1];
		}
		arr[j] = aux;
	}

	for(int l = 0; l < QTD; l++){
		printf("%d\n", arr[l]);
	}

	printf("\n");
}

int main(){
	int numeros[QTD], ns[QTD];

	//input dos valores
	for(int n = 0; n < QTD; n++){
		scanf("%d", &numeros[n]);
		ns[n] = numeros[n];
	}

	insertionSort(numeros, QTD);

	for(int m = 0; m < QTD; m++){
		printf("%d\n", ns[m]);
	}


	return 0;
}
