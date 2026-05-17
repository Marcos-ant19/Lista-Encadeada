#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

List* criar_list(){
    List* l = malloc(sizeof(List));
    if(l == NULL){
        return NULL;
    }
    l->inicio = NULL;
    l->qtd = 0;

    return l;
}

bool isEmpty(List* l){
    return l->inicio == NULL;
}

bool inserir(List* l, char valor){
    No* novoNo = malloc(sizeof(No));
    if(novoNo == NULL){
        return NULL;
    }
    novoNo->prox = NULL;
    novoNo->dados = valor;
    if(l->inicio == NULL){
        l->inicio = novoNo;
    }else{
      novoNo->prox = l->inicio;
      l->inicio = novoNo;
    }
    l->qtd++;
    return true;
}

bool inserirPos(List* l, char valor, int pos){
    No* novo = malloc(sizeof(No));
    if(novo == NULL){
        return NULL;
    }

    No* aux = l->inicio;
    int cont  = 0;

    novo->prox = NULL;
    novo->dados = valor;

    if(pos == 0){
        l->inicio = novo;
    }else{
        while(aux != NULL && cont < pos -1){
            aux = aux->prox;
            novo->prox = aux->prox;
            cont++;
        }
        aux->prox = novo;
    }

    l->qtd++;
    return true;
}

bool removerPos(List* l, int pos){
    if(isEmpty(l) || pos < 0 || pos > l->qtd){
        return false;
    }
    No* aux = l->inicio;
    No* temp = NULL;
    int cont = 0;

    if(pos == 0){
        l->inicio = aux->prox;
        return true;
    }
    while(aux->prox != NULL && cont < pos){
        temp = aux;
        aux = aux->prox;
        cont++;
    }
        temp->prox = aux->prox;

    free(aux);
    l->qtd--;
    return true;
}

bool consulta(List* l, int pos){
    if(isEmpty(l) || pos < 0 || pos > l->qtd){
        return false;
    }
    No* aux = l->inicio;
    int cont = 0;

    while(cont < pos){
        aux = aux->prox;
        cont++;
    }

    printf("%c ", aux->dados);

    return true;
}

void mostrar(List* l){
    No* aux  = l->inicio;

    while(aux != NULL){
        printf("%c ", aux->dados);
        aux = aux->prox;
    }
}

void size(List* l){
    No* aux = l->inicio;
    int i = 0;

    while(aux != NULL){
        aux = aux->prox;
        i++;
    }

    printf("%d ", i);
}

void clear(List* l){
    No* aux = l->inicio;
    No* prox;
    while(aux != NULL){
        prox = aux->prox;
        free(aux);
        aux = prox;
    }

    l->inicio = NULL;
    l->qtd = 0;
    printf("Limpando...\n");
}

void ordenar(List* l){
    
}
