#include "lists.h"

/**
 * print_dlistint - prints contents of dbly linked list
 * @h: nodes
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t nodeCount = 0;
const dlistint_t *temp = h;

if (h == NULL)
return (0);

while (temp != NULL)
{
printf("%d\n", temp->n);
nodeCount++;
temp = temp->next;
}
return (nodeCount);
}

