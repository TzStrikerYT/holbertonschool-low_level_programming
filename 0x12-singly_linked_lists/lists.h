#ifndef HOLBERTON_STRUCT
#define HOLBERTON_STRUCT

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /* HOLBERTON_STRUCT */

#ifndef HEADERS
#define HEADERS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#endif /* HEADER_FILES */

#ifndef FUNCTION
#define FUNCTION

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* FUNCTIONS */
