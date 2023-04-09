#include "main.h"

/**
  * flip_bits - Counts the number of bits needed to be
  * flipped to get from one number to another
  *
  * @n: Number to move from
  * @m: Number to move to
  *
  * Return: Returns the number of flips
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip_res = n ^ m;
unsigned int flips = 0;

while (flip_res)
{
flip_res &= (flip_res - 1);
flips++;
}

return (flips);
}
