#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node
  * 			at index of a listint_t linked list
  * @head: ...
  * @index: ...
  * Return: 1 if it succeeded, -1 if it failed
  *
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *now, *previous;

	if (!head || !(*head))
	{
		return (-1);
	}
	now = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(now);
		return (1);
	}
	for (; i < (index - 1); i++)
	{
		now = now->next;
		if (now == NULL)
			return (-1);
	}
	previous = now->next;
	now->next = previous->next;
	free(previous);
	return (1);
}
