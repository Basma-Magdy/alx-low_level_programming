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
listint_t *node, *temp, *new;
unsigned int i;
i = 0;

node = malloc(sizeof(listint_t));

if (!head || !node)
return (NULL);

temp = *head;
node->n = n;
node->next = NULL;

while (i != (idx - 1))
{
temp = temp->next;
i++;
}
new = temp->next;

temp->next = node;
node->next = new;

return (node);
}
