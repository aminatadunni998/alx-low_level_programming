#include <stdio.h>
#include <stdlib.h>

/**
 * main - Return alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int CH = 'A';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (CH <= 'z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
