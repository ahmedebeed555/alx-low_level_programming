#include "main.h"
/**
  * _isalpha - Check if alphabetic character
  * @n: The number to check
  *
  * Return: 1 for n > 0
  *
  * Return: 0 of input 0
  *
  * Return: -1 for n < 0
  */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
