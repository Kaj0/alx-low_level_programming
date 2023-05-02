#include "lists.h"

/**
  * add_nodeint - adds a new node at the end of a listint_t list
  * @head: current position
  * @n: int
  * Return: the address of the new element, or NULL if it failed
  *
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *now;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	now = *head;
	while (now)
	{
		if (!now->next)
		{
			now = now->next;
		}
		new = now->next;
	}
	return (*head);
	
}
