#include <stdio.h>
/**
* main - generate combinations of numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
int numx;
int numz;
for (num = 48; num < 58; num++)
{
for (numx = num + 1; numx < 58; numx++)
{
for (numz = numx + 1; numz < 58; numz++)
{
putchar(num);
putchar(numx);
putchar(numz);
if (num == 55 && numx == 56 && numz == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
}
return (0);
}
