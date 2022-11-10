#include <stdio.h>
#include <stdlib.h>
#include "add_node.h"

// Function declarations for reversing linked list
node *rev_ll(node *list, node *tmp1, node *tmp2);

node *reverse(node *list)
{
    // If list null
    if (list == NULL)
    {
        return list;
    }
    
    // If only one item in list
    node *tmp1 = list->next;
    if (tmp1 == NULL)
    {
        return list;
    }

    // If only two items in list
    node *tmp2 = tmp1->next;
    if (tmp2 == NULL)
    {
        tmp1->next = list;
        list = tmp1;
        list->next->next = NULL;
        return list;
    }

    // Pointing the first node to null
    list->next = NULL;

    // For rest of the cases
    list = rev_ll(list, tmp1, tmp2);
    
    return list;
}

node *rev_ll(node *list, node *tmp1, node *tmp2)
{
    tmp1->next = list;
    list = tmp2->next;

    if (list == NULL)
    {
        list = tmp2;
        list->next = tmp1;
        return list;
    }

    else 
    {
        return rev_ll(tmp1, tmp2, list);
    }
}   
