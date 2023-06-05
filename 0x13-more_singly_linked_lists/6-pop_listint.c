#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - entry point
* Return: nothing
* @head: pointer to the list
*/
int pop_listint(listint_t **head)
{
listint_t *HeadData;
int n;

if (!head || (!(*head)))
return (0);


HeadData = (*head)->next;
n = (*head)->n;

free(*head);

*head = HeadData;

return (n);
}
