#include "main.h"

/**
  * print_binary - Prints the binary representation of a number
  *
  * @n: The number to print
  */
void print_binary(unsigned long int n)
{
int flag = 0;
unsigned long int mask;

if (n == 0)
{
_putchar('0');
return;
}
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

while (mask > 0)
{
if (n & mask)
{
_putchar('1');
flag = 1;
}
else
{
if (flag == 1)
_putchar('0');
}
mask = mask >> 1;
}
}
