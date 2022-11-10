#include <stdio.h>
#include <stdlib.h>
#include "add_node.h"


int main(void) {
    node *list = NULL;
    node *n = malloc(sizeof(node));

    if (n == NULL) {
        return 1;
    }

    n->number = 1;
    n->next = NULL;

    list = n;

    int x;
    printf("Enter number: ");
    scanf("%i", &x);

    for (int i=2; i<=x; i++)
    {
        list = add_node(list, i);
    }

    printf("The linked list is: \n");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%i ", tmp->number);
    }
    printf("\n");
    
    list = reverse(list);
    printf("The reversed linked list is: \n");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%i ", tmp->number);
    }
    printf("\n");

    while (list != NULL) {
        node *tmp = list->next;
        free(list);
        list = tmp;

    }

    return 0;


}
