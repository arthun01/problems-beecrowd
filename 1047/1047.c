#include <stdio.h>

int main(){
	int start[2], end[2], s, e, rh, rm;

	for(int c = 0; c < 2; c++){
		scanf("%d", &start[c]);
	}

	for(int x = 0; x < 2; x++){
		scanf("%d", &end[x]);
	}

	if((start[0] == end[0]) && start[1] == end[1]){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else{
		s = (start[0] * 60) + start[1];
		e = (end[0] * 60) + end[1];

		rh = e - s;
		rm = e - s;

		rh = rh / 60;

		if (rm <= 60){
			rm = rm;
		}else{
			rm = rm % 60;
		}

		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rh, rm);
	}

	return 0;
}
