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

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}
