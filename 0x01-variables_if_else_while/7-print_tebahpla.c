#include <stdio.h>
/**
* main - generate alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
int letra;
for (letra = 122; letra > 96; letra--)
{
putchar(letra);
}
putchar('\n');
return (0);
}
