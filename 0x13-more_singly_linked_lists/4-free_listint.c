#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint- entry point
* Return: nothing
* @head: pointer to the list
*/
void free_listint(listint_t *head)
{
listint_t *temp, *tofreeNode;
tofreeNode = head;

if (!head)
return;

while (tofreeNode)
{
temp = tofreeNode->next;
free(tofreeNode);
tofreeNode = temp;
}
}
