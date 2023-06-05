#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - entry point
* Return: int of list sum
* @head: pointer to the list
*/
int sum_listint(listint_t *head)
{
int sum;
sum = 0;

if (!head)
return (0);


while ((head->next) != NULL)
{
sum += head->n;
head = head->next;
}

sum += head->n;

return (sum);
}
