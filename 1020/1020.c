#include <stdio.h>

int main(){
	int x, ye, mo, days;

	scanf("%d", &x);

	ye = (x / 365);
	days = (x % 365);
	mo = days / 30;
	days = days % 30;

	printf("%d ano(s)\n", ye);
	printf("%d mes(es)\n", mo);
	printf("%d dia(s)\n", days);

	return 0;
}
