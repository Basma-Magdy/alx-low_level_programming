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
listint_t *node, *new_node;
unsigned int i;
i = 0;

new_node = malloc(sizeof(listint_t));

if (!head || !new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (!idx)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

node = *head;
while (node)
{
if (i == (idx - 1))
{
new_node->next = node->next;
node->next = new_node;
return (new_node);
}
node = node->next;
i++;

}
free(new_node);
return (NULL);
}
