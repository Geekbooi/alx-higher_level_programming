#ifndef LISTS_H
#define LISTS_H

<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

<<<<<<< HEAD
#endif /* LISTS_H */
=======
#endif
>>>>>>> 136292ce6768eb965a501fc52ec785eb7af3781e
