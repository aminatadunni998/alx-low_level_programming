#include <stdlib.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  *
  * @b: A pointer to a string of 0's and 1's
  *
  * Return: Returns the converted number (Success), or 0 (Fail)
  */
unsigned int binary_to_uint(const char *b)
{
unsigned int bit, count, i, result;

if (b == NULL || *b == '\0')
return (0);
i = count = result = 0;
while (b[i] != '\0')
{
if (((b[i] - 48) & ~1) != 0)
return (0);
count++;
i++;
}

if (count > 0)
{
count--;
i = 0;
while (b[i] != '\0')
{
bit = b[i] - 48;
result += bit << count;
count--;
i++;
}
}

return (result);
}
