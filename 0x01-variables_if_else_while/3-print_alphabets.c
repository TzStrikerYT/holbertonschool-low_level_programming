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
int letrau;
for (letra = 97; letra < 123; letra++)
{
putchar(letra);
}
for (letrau = 65; letrau < 91; letrau++)
{
putchar(letrau);
}
putchar('\n');
return (0);
}
