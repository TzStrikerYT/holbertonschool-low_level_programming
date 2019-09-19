#include <stdio.h>
/**
* main - generate number 01 to 89
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
int numx;
for (num = 48; num < 58; num++)
{
for (numx = num + 1; numx < 58; numx++)
{
putchar(num);
putchar(numx);
if (num == 56 && numx == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
return (0);
}
