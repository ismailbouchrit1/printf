#include "main.h"

/**
 * _ui - print an unsigned int
 * @unsign: list
 * Return: count
 */
int _ui(va_list unsign)
{
	unsigned int n;
	int expo = 1;
	int len = 0;

	n = va_arg(unsign, unsigned int);

	while (n / expo > 9)
		expo *= 10;
	while (expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}
