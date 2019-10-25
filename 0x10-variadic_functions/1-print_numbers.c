#include "variadic_functions.h"

/**
 * print_numbers - function thats prints numbers followed by a new line
 * @separator: Define the separator for the numbers
 * @n: Define number of arguments.
 * Return: Void variable.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numbers;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		printf("%d ", va_arg(numbers, int));

	va_end(numbers);
	putchar('\n');
}
