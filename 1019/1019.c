#include <stdio.h>

int main(){
	int seg, hr, min;

	scanf("%d", &seg);

	hr = (seg / 60) / 60;
	seg = seg - (hr * 60 * 60);
	min = seg / 60;
	seg %= 60;

	printf("%d:%d:%d\n", hr, min, seg);

	return 0;
}
