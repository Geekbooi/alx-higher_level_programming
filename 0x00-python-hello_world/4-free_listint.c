#include "lists.h"

/**
 * free_listint - a function that frees linked lists.
 * @head: pointer to a struct
 *
 * Return: void function
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
<<<<<<< HEAD
=======
	
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
