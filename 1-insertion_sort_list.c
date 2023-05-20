#include "sort.h"
/**
 * 
 * 
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *sorted = NULL, *current = *list, *next, *sortedptr;
    
    if (!(*list) || !(*list)->next)
        return;
   

    while (current)
    {
        next = current->next;
        sortedptr = sorted; 
        
        while (sortedptr && sortedptr->n < current->n)
        {
            sortedptr = sortedptr->next;
        }
        
        if (!sortedptr)
        {
            current->prev = sorted;
            current->next = NULL;
            if(sorted)
            {
                sorted->next = current;
            }
        sorted = current;
        
        *list = sorted;
        }
        else
        {
            if(sorted->prev)
                sortedptr->prev->next = current;
            current->prev = sortedptr->prev;
            current->next = sortedptr;
            sortedptr->prev = current;
            if(!current->prev)
                *list = current; 
            
        }
        print_list(*list);
        current = next;
        
    }
    
}