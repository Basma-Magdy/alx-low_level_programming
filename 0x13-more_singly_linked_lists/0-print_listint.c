#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_listint - print a list
* Return: number of nodes
* @h:
*/
size_t print_listint(const listint_t *h)
{
size_t Num;
Num = 0;

if (h == NULL)
return (0);

while ((h->next) != NULL)
{
Num++;
printf ("%d\n", (h->n));
h = h->next;
}

printf ("%d\n", (h->n));
Num++;

return (Num);
}
