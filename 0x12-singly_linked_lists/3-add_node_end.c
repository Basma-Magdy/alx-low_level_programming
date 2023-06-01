#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - string length
* @s: input string
* Return: integer length
*/
unsigned int _strlen(const char *s)
{
unsigned int i, len;
len = 0;

for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}

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

