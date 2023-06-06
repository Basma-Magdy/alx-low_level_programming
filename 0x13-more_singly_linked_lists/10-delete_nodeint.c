#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index  - entry point
* Return: integer
* @head: pointer to the list
* @index: index of node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev_node, *node;
unsigned int i;
i = 0;

if (!head || !(*head))
return (-1);

node = *head;

if (!index)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}

while (node)
{
	if (i == index)
	{
	prev_node->next = node->next;
	free(node);
	return (1);
	}
i++;
prev_node = node;
node = node->next;
}

return (-1);
}
