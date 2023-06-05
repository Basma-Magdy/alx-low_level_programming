#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - print a list
* Return: number of nodes
* @head: pointer to the list
* @n: data of node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *New_Node;

New_Node = malloc(sizeof(listint_t));

if (!New_Node || !head)
{
return (NULL);
}

New_Node->n = n;
New_Node->next = *head;
*head = New_Node;

return (New_Node);
}
