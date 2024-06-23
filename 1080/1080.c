#include <stdio.h>

int main(){
	int arr[100], hig, pos;

	for(int c = 0; c < 100; c++){
		scanf("%d", &arr[c]);
	}

	hig = arr[0];
	pos = 0;

	int n = sizeof(arr) / sizeof(arr[0]);

	for(int x = 1; x < n; x++){
		if(arr[x] > hig){
			hig = arr[x];
			pos = x+1;
		}
	}

	printf("%d\n%d\n", hig, pos);

	return 0;
}
