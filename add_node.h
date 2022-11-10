typedef struct node 
{
    struct node *next;
    int number;
}
node;


node *add_node(node *list, int x);

node *reverse(node *list);
