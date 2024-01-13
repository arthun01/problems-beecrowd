#include <stdio.h>

int main(){
	int width, height, t1, t2;

	scanf("%d %d", &width, &height);

	t1 = (width * height) + ((width - 1) * (height - 1));
	t2 = ((width * 2) - 2) + ((height * 2) - 2);

	printf("%d\n", t1);
	printf("%d\n", t2);

	return 0;
}
