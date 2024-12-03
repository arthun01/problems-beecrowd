#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= (n*4); i+=4){
        printf("%d %d %d PUM\n", i, i+1, i+2);
    }

    return 0;
}