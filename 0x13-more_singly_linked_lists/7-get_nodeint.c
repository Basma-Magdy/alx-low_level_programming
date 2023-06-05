#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - entry point
* Return: pointer to the list
* @head: pointer to the list
* @index: index of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *Node;
unsigned int i;
i = 0;

if (!head)
return (NULL);

while (i != index)
{
head = head->next;
i++;
}

Node = head;

return (Node);
}
