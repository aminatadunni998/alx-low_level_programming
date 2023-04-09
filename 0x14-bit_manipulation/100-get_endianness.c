#include "main.h"

/**
  * get_endianness - Determines the endianness of the system running it
  *
  * Return: Returns 1 (Little Endian), or 0 (Big Endian)
  */
int get_endianness(void)
{
unsigned int i;
char *c;

i = 1;
c = (char *)&i;

if (*c)
return (1);
else
return (0);
}
