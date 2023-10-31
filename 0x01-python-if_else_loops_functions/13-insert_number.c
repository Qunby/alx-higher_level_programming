#include "lists.h"

/**
 * insert_node - inserts a number into a sorted list
 * @head: pointer to the list
 * @number: number to add
 * Return: address of the added node else NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *old, *new, *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
