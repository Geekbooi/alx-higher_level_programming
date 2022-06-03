#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *current;
	listint_t *temp;
	int i;
<<<<<<< HEAD

=======
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint(head);

	if (check_cycle(head) == 0)
		printf("Linked list has no cycle\n");
	else if (check_cycle(head) == 1)
		printf("Linked list has a cycle\n");
<<<<<<< HEAD

=======
	
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
	current = head;
	for (i = 0; i < 4; i++)
		current = current->next;
	temp = current->next;
	current->next = head;
<<<<<<< HEAD


=======
	
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
	if (check_cycle(head) == 0)
		printf("Linked list has no cycle\n");
	else if (check_cycle(head) == 1)
		printf("Linked list has a cycle\n");
<<<<<<< HEAD


	current = head;
	for (i = 0; i < 4; i++)
		current = current->next;

	current->next = temp;
	free_listint(head);
=======
	
	current = head;
	for (i = 0; i < 4; i++)
		current = current->next;
	current->next = temp;
	
	free_listint(head);
	
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
	return (0);
}
