#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - generate random number and show if option
*
* Return: Always 0 (Success)
*/
int main(void)
{
int letra;
for (letra = 97; letra < 123; letra++)
{
if (letra == 101 || letra == 113)
{
continue;
}
putchar(letra);
}
putchar('\n');
return (0);
}
