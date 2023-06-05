#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* listint_len - print a list
* Return: number of nodes
* @h: pointer to the list
*/
size_t listint_len(const listint_t *h)
{
size_t Num;
Num = 0;

if (h == NULL)
return (0);

while ((h->next) != NULL)
{
Num++;
h = h->next;
}

Num++;

return (Num);
}
