#include <stdio.h>

int main(){
    int n, count, multi;

    scanf("%d", &n);

    for (count = 1; count <= 10; count++){
        multi = n * count;
        printf("%d x %d = %d\n", count, n, multi);
    }

    return 0;
}