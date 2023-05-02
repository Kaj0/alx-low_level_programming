#include "lists.h"

/**
  * sum_listint - returns sum of all data of a linked list
  * @head: ...
  * Return: sum of data or 0 if empty
  *
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (; head;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
