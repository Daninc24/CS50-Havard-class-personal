#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->data = get_int("Number: ");
        n->next = NULL;

        // if list is empty
        if (list == NULL)
        {
            list = n;
        }
        // else, find the end of the list and append
        else
        {
            for (node *ptr = list; ; ptr = ptr->next)
            {
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // time passes
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\n", ptr->data);
    }

    // free memory
    while (list != NULL)
    {
        node *next = list->next;
        free(list);
        list = next;
    }
    return 0;
}