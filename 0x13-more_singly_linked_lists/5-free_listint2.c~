#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: ...
  *
  */
void free_listint2(listint_t **now)
{
	listint_t *temp, *now;

	if (!head)
	{
		return;
	}
	now = *head;
	while (now != NULL)
	{
		temp = now;
		now = now->next;
		free(temp);
	}
	*head = NULL;
}
