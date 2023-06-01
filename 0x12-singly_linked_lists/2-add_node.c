#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - entry point
* Return: size of list
* @head: pointer to the list
*@str: string.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *NewNode;
NewNode = malloc(sizeof(list_t));

if (!head || !NewNode)
return (NULL);

if (str)
{
NewNode->str = strdup(str);

if (!NewNode->str)
{
free(NewNode);
return (NULL);
}
NewNode->len = _strlen(str);
}

NewNode->next = *head;
*head = NewNode;

return (NewNode);
}
