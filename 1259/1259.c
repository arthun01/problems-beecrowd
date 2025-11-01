// 1259

#include <stdio.h>
#include <stdlib.h>

int main(void){
    // quantidade de linhas a ser lida
    int n;
    scanf("%d", &n);

    // declaração array dinamico (tempo de execução)
    int* array = (int*)malloc(n * sizeof(int));

    if(array == NULL){
        printf("Erro na alocação\n");
        exit(1);
    }

    // guardando os valores no array
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    // ordena minha parada usando sort da biblioteca
    int compare(const void* a, const void* b){
        int* valA = a;
        int* valB = b;
        return *valA - *valB;
    }

    qsort(array, n, sizeof(array[0]), compare);

    // lógica de par e impar com printf
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            printf("%d\n", array[i]);
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(array[i] % 2 != 0){
            printf("%d\n", array[i]);
        }
    }

    return 0;
}