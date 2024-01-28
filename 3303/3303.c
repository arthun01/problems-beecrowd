#include <stdio.h>
#include <string.h>

int main(){
    char word[20];
    int len;

    gets(word);

    len = strlen(word);

    if (len >= 10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }

    return 0;
}