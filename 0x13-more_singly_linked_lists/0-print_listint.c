#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: list
  * Return: the number of nodes
  *
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	for (; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
