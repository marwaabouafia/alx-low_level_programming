#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
(*
 * Return: 0 on success
 */
int main(void)
{
	for (char c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
