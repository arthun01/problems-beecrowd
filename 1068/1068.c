#include <stdio.h>
#include <string.h>

#define TAM 1001

int resolve(char *expressao){
    int tam = strlen(expressao);
    int qtd_abertos = 0;

    for(int i = 0; i < tam; i++){
        if(expressao[i] == '('){
            qtd_abertos++;
        }else if (expressao[i] == ')'){
            if(qtd_abertos > 0)
                qtd_abertos--;
            else
                return 0;
        }
    }

    if(qtd_abertos == 0)
        return 1;
    else
        return 0;
}

int main(void){
    char expressao[TAM];
    int correct;

    // while(fgets(expressao, TAM, stdin)){
    while(gets(expressao)){
    //while(scanf("%s", expressao) != EOF){
        correct = resolve(expressao);

        if(correct == 1)
            printf("correct\n");
        else
            printf("incorrect\n");
    }

    return 0;
}