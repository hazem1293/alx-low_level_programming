#include "main.h"

/**
 * swap_int - checks for uppercase character
 * @a: the character to be checked
 * @b: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
