#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 *
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Return: pointer
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *new_str;
	unsigned int s1_size = 0, s2_size = 0, length = 0;

	if (s1 != NULL)
	{
		s1_size = strlen(s1);
	}
	i = 0;
	if (s2 != NULL)
	{
		s2_size = strlen(s2);
		s2_size = n <= s2_size ? n : s2_size;
	}
	length = s1_size + s2_size;
	new_str = malloc((length * sizeof(char)) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < s1_size)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < length)
	{
		new_str[i] = s2[j];
		j++;
		i++;
	}
	new_str[length] = '\0';
	return (new_str);
}
