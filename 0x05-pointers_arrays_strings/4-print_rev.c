#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 *
 * @s : pointer to the string
 *
 */
void print_rev(char *s)
{
int len = 0, j;
while(s[len] != '\0')
{
len++;
}
for(j = len - 1; j >=0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
