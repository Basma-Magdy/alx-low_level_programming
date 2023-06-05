#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - entry point
* Return: pointer to the list
* @head: pointer to the list
* @idx: index of node
* @n: data to insert in node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *temp;
unsigned int i;
i = 0;
temp = *head;

node = malloc(sizeof(listint_t));

if (!head || !node)
return (NULL);

node->n = n;

while (i != (idx))
{
temp = temp->next;
i++;
}

node->next = temp;
temp = node;
*head = temp;

return (node);
}
