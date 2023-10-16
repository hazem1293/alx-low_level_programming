#include "main.h"

/**
 * _strlen - checks for uppercase character
 * @s: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _strlen(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
