#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - entry point
* Return: size of list
* @h: pointer to the list
*/
size_t list_len(const list_t *h)
{
size_t n;
n = 0;

while (h != NULL)
{
h = h->next;
n++;
}

return (n);
}
