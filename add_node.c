#include <stdio.h>
#include <stdlib.h>
#include "add_node.h"

node *add_node(node *list, int x)
{
    
    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        n->number = x;
        n->next = list;
        list = n;
        return list;
    }
    return list;
}
