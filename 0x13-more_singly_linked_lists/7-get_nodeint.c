#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: ...
  * @index: ...
  * Return: nth node or NULL if doesn't exist
  *
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *n;

	if (head == NULL)
	{
		return (NULL);
	}
	n = head;
	while (i < index)
	{
		if (n == NULL)
		{
			return (NULL);
		}
		n = n->next;
		i++;
	}
	return (n);
}
