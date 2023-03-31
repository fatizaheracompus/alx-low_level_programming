#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to string.
 * Return: pointer to s.
 */

char *cap_string(char *s)
{
int c;

c = 0;
while (s[c] != '\0')
{
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n'
|| s[c] == ',' || s[c] == ';' || s[c] == '.'
|| s[c] == '.' || s[c] == '!' || s[c] == '?'
|| s[c] == '"' || s[c] == '(' || s[c] == ')'
|| s[c] == '{' || s[c] == '}')
{
if (s[c + 1] >= 97 && s[c + 1] <= 122)
{
s[c + 1] = s[c + 1] - 32;
}
}
c++;
}
return (s);
}
