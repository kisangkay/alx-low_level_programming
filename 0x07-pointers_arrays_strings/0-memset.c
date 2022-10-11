#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * declare the local variables
 * @s: is the pointer to put the constant
 * @b: is the constant
 * @n: is the number of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}

	return (s);

}
