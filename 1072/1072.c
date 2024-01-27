#include <stdio.h>

int main(){
	int n, count, in, out;

	scanf("%d", &n);

	in = 0;
	out = 0;

	int x[n];

	for (count = 1; count <= n; count++){
		scanf("%d", &x[count]);

		if ((x[count] >= 10) && (x[count] <= 20)){
			in += 1;
		}else{
			out += 1;
		}
	}

	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
}
