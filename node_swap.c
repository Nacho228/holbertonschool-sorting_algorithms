#include "sort.h"
/**
 * 
 * 
*/
void _nodeswap(listint_t **head, int a, int b)
{
    listint_t *prevx = NULL, *currx = *head;
    listint_t *prevy = NULL, *curry = *head;
    listint_t *temp;

    if (a == b)
        return;

    while (currx && currx->n != a)
    {
        prevx = currx;
        currx = currx->next;
    }

    while (curry && curry->n != b)
    {
        prevy = curry;
        curry = curry->next;
    }

    if(!currx || !curry)
        return;

    if (prevx)
        prevx->next = curry;
    else
        *head = curry;
    
    if(prevy)
        prevy->next = currx;
    else
        *head = currx;
    temp = curry->next;
    curry->next = currx->next;
    currx->next = temp;
}