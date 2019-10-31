#include "lists.h"

void before(void) __attribute__ ((constructor));

/**
 * before - this will be printed before main
 *
 * Description: constructor happens after main. descructor is after
 * Return: void variable
 */

void before(void)
{
	char *x = "You're beat! and yet, you must allow,\n";
	char *y = "I bore my house upon my back!\n";

	printf("%s%s", x, y);
}
