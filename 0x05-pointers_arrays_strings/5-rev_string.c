#include "main.h"
/**
 * rev_string - reverses the string
 *
 * @s : string 
 *
 * Return: string recersed
 *
 *
 */
void rev_string(char *s)
{
int len = 0 , j;
char *t,s1;
*t = &s1;
while(s[len] != '\0')
{
len++;
}
for(j = len -1; j >= 0; j--)
{
t[len - j] = s[j];
}
s = t;
}
