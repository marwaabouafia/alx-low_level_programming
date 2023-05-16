#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program.
 *
 * @ac: int
 * @av: char
 *
 * Return: char
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *new_str;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	new_str = malloc((length * sizeof(char)) + 1);
	if (new_str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k++] = av[i][j];
		}
		new_str[k++] = '\n';
	}
	new_str[k] = '\0';
	return (new_str);
}
