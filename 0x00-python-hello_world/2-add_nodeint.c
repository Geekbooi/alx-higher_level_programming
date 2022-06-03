#include "lists.h"

/**
 * add_nodeint - a function that adds node.
 * @head: pointer to a struct
 * @n: name of new node
 *
 * Return: struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (head == NULL)
<<<<<<< HEAD
	{
=======
	{								
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
		(*head)->next = temp;
	}
	else
	{
		temp->next = *head;
<<<<<<< HEAD
		(*head) = temp;															
=======
		(*head) = temp;
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
	}
	return (temp);
}
