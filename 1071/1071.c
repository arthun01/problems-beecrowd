#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, imps = 0, aux;

    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for(int c = n1+1; c < n2; c++)
        if(c % 2)
            imps += c;

    printf("%d\n", imps);

    return 0;
}