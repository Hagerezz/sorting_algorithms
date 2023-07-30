#include "sort.h"

/**
 * insertion_sort_list: insertion sort
 * list: double array
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *node = (*list)->next;
    listint_t *prev = NULL;
    listint_t *next = NULL;

    while (node != NULL)
    {
        next = node->next;
        prev = node->prev;
        while (prev != NULL && prev->n > node->n)
        {
            if (node->next != NULL)
                node->next->prev = prev;
            if (prev->prev != NULL)
                prev->prev->next = node;
            else
                *list = node;
            
            prev->next = node->next;
            node->prev = prev->prev;
            node->next = prev;
            prev->prev = node;
            print_list(*list);
            prev = node->prev;
        }
        node = next;   
    }
}