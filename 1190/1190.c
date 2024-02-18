#include <stdio.h>

#define m 12
#define n 12

int main(){
  char o;
  float matriz[m][n], soma = 0;


  scanf("%c", &o);

  //lendo
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      scanf("%f", &matriz[i][j]);
    }
  }

  soma += (matriz[1][11] + matriz[2][10] + matriz[2][11] + matriz[3][9] + matriz[3][10] + matriz[3][11] + matriz[4][8] + matriz[4][9] + matriz[4][10] + matriz[4][11] + matriz[5][7] + matriz[5][8] + matriz[5][9] + matriz[5][10] + matriz[5][11] + matriz[6][7] + matriz[6][8] + matriz[6][9] + matriz[6][10] + matriz[6][11] + matriz[7][8] + matriz[7][9] + matriz[7][10] + matriz[7][11] + matriz[8][9] + matriz[8][10] + matriz[8][11] + matriz[9][10] + matriz[9][11] + matriz[10][11]);

  if (o == 'S'){
    printf("%.1f\n", soma);
  }else if (o == 'M'){
    soma = soma / 30;
    printf(".1f\n", soma);
  }

  return 0;
}