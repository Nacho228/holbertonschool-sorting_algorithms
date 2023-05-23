#include "sort.h"
/**
 * 
 * 
*/
void insertion_sort_list(listint_t **list)
{
    if (!(*list))
        return;

    listint_t *current = *list, *next, *aux;

    while (current)
    {
        aux = current->prev;
        while (aux && aux->n <= current->n)
        {
            next = aux->next;

            if (aux->prev)
                aux->prev->next = current;
            else
                *list = current;
            if(next)
                next->prev = aux;
            
            aux->next = next;
            current->prev = aux;
            current->next = aux;
            aux->prev = current;

            aux = next;
              
        }
    
        current = current->next;
        print_list(*list); 
    }
    
}