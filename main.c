#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    //List* l = criar_list();
    List* l = criar_list();

    inserirPos(l, 10, 0);

    //int i = 0;
    //int pos;

    inserirPos(l, 'm', 0);
    inserirPos(l, 'a', 1);
    inserirPos(l, 'r', 2);
    inserirPos(l, 'c', 3);
    inserirPos(l, 'o', 4);

      //ordenar(l);
      //clear(l);
      mostrar(l);

    //size(l);

    //printf("Digite a posição de consulta: ");
    //scanf("%d", &pos);

    //consulta(l, pos);


    /*do{
        removerPos(l, i);

    }while(!isEmpty(l));
    */
    return 0;
}