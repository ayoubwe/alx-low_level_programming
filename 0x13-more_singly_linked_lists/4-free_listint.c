#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function of listint_t list
 * @head: the head
 * Return: NULL or not it depend
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
