#include "main.h"

/**
 * _strlen - function that find the length of a string
 * @s: String
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
		return (size);
}

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: integer
 * @av: Argument
 *
 * Return: String
 */
char *argstostr(int ac, char **av)
{
	int i = 0, ct = 0, j = 0, cpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, ct++)
		ct += _strlen(av[i]);

	s = malloc(sizeof(char) * ct + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cpt++)
			s[cpt] = av[i][j];
		s[cpt] = '\n';
		cpt++;
	}
	s[cpt] = '\0';
	return (s);
}
