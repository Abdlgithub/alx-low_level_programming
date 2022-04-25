#include "lists.h"

/**
 * reverse_listint-reverse a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = Null;
	listint_t *next = Null;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head)
}
