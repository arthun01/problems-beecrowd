#include <stdio.h>

int main(){
    int n, c = 0;
    float soma = 0.0;
    float media = 0.0;

    scanf("%d", &n);

    while(n > 0){
        soma = soma + n;
        scanf("%d", &n);
        c = c + 1;
    }

    if(c > 0){
        media = soma / c;
        printf("%.2f\n", media);
    }

    return 0;
}   