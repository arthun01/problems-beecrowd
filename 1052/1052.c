#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	char meses[12][20] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	scanf("%d", &n);

	printf("%s\n", meses[n-1]);

	return 0;
}
