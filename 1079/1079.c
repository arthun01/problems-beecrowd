#include <stdio.h>

int main(){
    int n, i, nn;

    i = 0;

    //lendo quantas linhas terao
    scanf("%d", &n);

    //declarando o array das notas, ele existe agora!!
    float notas[n], medias;
    nn = (n * n) + 1;

    do{
        nn--;
        scanf("%f", &notas[]);
        printf("%.1f\n", notas[]);
    }while (nn > 0);
    

    return 0;
}