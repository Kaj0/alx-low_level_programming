#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: ...
  * Return: the head node’s data(n) or 0 if empty
  *
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new;

	if (!(*head) || !head)
	{
		return (0);
	}

	new = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new;

	return (i);
}
