#ifndef LIST_H
#define LIST_H

#include <stdbool.h>

typedef struct No{
    char dados;
    struct No* prox;
}No;

typedef struct List{
    No* inicio;
    int qtd;
}List;

List* criar_list();
bool isEmpty(List* l);
bool inserir(List* l, char valor);
bool inserirPos(List* l, char valor, int pos);
bool removerPos(List* l, int pos);
void mostrar(List* l);
bool consulta(List* l, int pos);
void clear(List* l);
void size(List* l);
void ordenar(List* l);

#endif
