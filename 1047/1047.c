#include <stdio.h>

int main(){
	int h1, m1, h2, m2, horas, minutos, duracao;

	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

	if ((h1 == m1) && (m1 == h2) && (h2 == m2)){
		horas = 24;
 		minutos = 0;
	}else{
		minutos = ((h2 * 60) + m2) - ((h1 * 60) + m1);
		horas = duracao / 60;
		minutos %= 60;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

	return 0;
}
