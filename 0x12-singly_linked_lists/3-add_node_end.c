#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - entry point
* Return: size of list
* @head: pointer to the list
* @str: data input
*/
list_t *add_node_end(list_t **head, const char *str)
{

list_t *NewNode = malloc(sizeof(list_t));
list_t *temp = *head;

if (!NewNode || !head)
return (NULL);

if(str)
{
NewNode->str = strdup(str);

if (!NewNode->str)
{
free(NewNode);
return(NULL);
}

NewNode->len = strlen(str);
}

NewNode->next = NULL;

if (temp)
{

while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = NewNode;
}
else
*head = NewNode;

return (NewNode);
}

