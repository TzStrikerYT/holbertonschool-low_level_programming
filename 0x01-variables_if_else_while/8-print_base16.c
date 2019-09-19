#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - generate numbers in base16
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
int letra;
for (num = 48; num < 58; num++)
{
putchar(num);
}
for (letra = 97; letra < 103; letra++)
{
putchar(letra);
}
putchar('\n');
return (0);
}
