#include <stdio.h>

int main(){
	int start, end, time;

	scanf("%d %d", &start, &end);

	time = 24;
	if (start > 12){
		time -= start;
		time += end;
	}else if ((start > 0) && (end > 0)){
		time = end - start;
	}else{
		time = 24;
	}

	printf("O JOGO DUROU %d HORA(S)\n", time);


	return 0;
}
