#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: ...
  * @idx: ...
  * @n: ...
  * Return: the address of the new node, or NULL if it failed
  *
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *now, *new;

	now = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (index == 0)
	{
		new->next = now;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		now = now->next;
		index--;
		if (!now)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = now->next;
	now->next = new;
	return (new);
}
