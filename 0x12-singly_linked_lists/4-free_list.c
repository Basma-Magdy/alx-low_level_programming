#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - entry point
* Return: nothing
* @head: pointer to the list
*/
void free_list(list_t *head)
{
list_t *temp, *tofreeNode;
tofreeNode = head;

if (!head)
return;

while (tofreeNode)
{
temp = tofreeNode->next;
free(tofreeNode->str);
free(tofreeNode);
tofreeNode = temp;
}
}
