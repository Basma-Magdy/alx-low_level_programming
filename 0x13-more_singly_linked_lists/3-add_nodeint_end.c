#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - print a list
* Return: number of nodes
* @head: pointer to the list
* @n: data of node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *New_Node, *temp;

temp = *head;

New_Node = malloc(sizeof(listint_t));

if (!New_Node || !head)
{
return (NULL);
}

New_Node->n = n;
New_Node->next = NULL;

if (temp)
{
while ((temp->next) != NULL)
{
temp = temp->next;
}
temp->next = New_Node;
}

else
{
*head = New_Node;
}

return (New_Node);
}
