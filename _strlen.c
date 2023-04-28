#include "main.h"

/**
 * _strlen - gets string length
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}
