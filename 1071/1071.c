#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, imps = 0;

    scanf("%d %d", &n1, &n2);

    if(n1 >= n2){
        for(int c = n1-1; c > n2; c--){
            if(c % 2 != 0){
                imps += c;
            }
        }
    }else{
        for(int c = n1+1; c > n2-1; c++){
            if(c % 2 != 0){
                imps += c;
            }
        }
    }

    printf("%d\n", imps);

}