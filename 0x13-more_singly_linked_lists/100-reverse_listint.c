#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to the address of the head of the list
 * Return: a pointer to the firts node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	p = NULL;
	n = NULL;
	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
