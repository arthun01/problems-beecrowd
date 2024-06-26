#include <stdio.h>

int main(){
    int fib, n, m;

    scanf("%d", &fib);

    n = 0;
    m = 1;

    int x, c;
    x = 0;
    c = 0;

    do{
        if(x == fib-1){
            printf("%d\n", c);
        }else{
            printf("%d ", c);
        }
        n = m;
        m = c;
        c = n + m;
        x += 1;
    }while(x < fib);

    return 0;
}