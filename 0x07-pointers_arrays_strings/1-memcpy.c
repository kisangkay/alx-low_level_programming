#include "main.h"

/**
 * *_memcpy - function cpies memory area
 * @dest:memory area
 * @src:source
 * @n:length of source*
 *
 * Return:dest pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
