#include <stdio.h>
#include <stdlib.h>

typedef struct TNo{
    int info;
    struct TNo* dir;
    struct TNo* esq;
} ArvBin;

ArvBin* insere(ArvBin* raiz, int valor){
    if(raiz == NULL){
        ArvBin* folha = (ArvBin*)malloc(sizeof(ArvBin));
        if(folha == NULL) return NULL;

        folha->info = valor;
        folha->dir = NULL;
        folha->esq = NULL;

        return folha;
    }

    if(valor > raiz->info){
        raiz->dir = insere(raiz->dir, valor);
    }else{
        raiz->esq = insere(raiz->esq, valor);
    }

    return raiz;
}

void formatPrint(ArvBin* raiz, int* primeiro){
    if(raiz == NULL) return;

    if(!*primeiro){
        printf(" ");
    }
    printf("%d", raiz->info);

    *primeiro = 0;
}

void preOrderPrint(ArvBin* raiz, int* primeiro){
    if(raiz == NULL) return;
    formatPrint(raiz, primeiro);
    preOrderPrint(raiz->esq, primeiro);
    preOrderPrint(raiz->dir, primeiro);
}

void inOrderPrint(ArvBin* raiz, int* primeiro){
    if(raiz == NULL) return;
    inOrderPrint(raiz->esq, primeiro);
    formatPrint(raiz, primeiro);
    inOrderPrint(raiz->dir, primeiro);
}

void posOrderPrint(ArvBin* raiz, int* primeiro){
    if(raiz == NULL) return;
    posOrderPrint(raiz->esq, primeiro);
    posOrderPrint(raiz->dir, primeiro);
    formatPrint(raiz, primeiro);
}

int main(void){
    int c;
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        int n;
        scanf("%d", &n);

        ArvBin* minha_arvore = NULL;

        for(int j = 0; j < n; j++){
            int aux;
            scanf("%d", &aux);

            minha_arvore = insere(minha_arvore, aux);
        }

        printf("Case %d:\n", i + 1);

        int primeiro_pre = 1;
        printf("Pre.: ");
        if(minha_arvore != NULL)
            preOrderPrint(minha_arvore, &primeiro_pre);
        printf("\n");

        int primeiro_in = 1;
        printf("In..: ");
        if(minha_arvore != NULL)
            inOrderPrint(minha_arvore, &primeiro_in);
        printf("\n");

        int primeiro_pos = 1;
        printf("Post: ");
        if(minha_arvore != NULL)
            posOrderPrint(minha_arvore, &primeiro_pos);
        printf("\n\n");
    }

    return 0;
}