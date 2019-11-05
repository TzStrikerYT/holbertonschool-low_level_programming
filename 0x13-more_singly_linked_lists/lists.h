#ifndef STRUCT
#define STRUCT

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

#endif /* STRUCT */

#ifndef HEADERS_AND_LIBRARIES
#define HEADERS_AND_LIBRARIES

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int pop_listint(listint_t **head);
void free_listint2(listint_t **head);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
int _putchar(int c);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif /* HEADERS AND LIBRARIES */
