#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0
 */
int	main(void)
{
		char *str = "_putchar";

		while (*str)
		{
			_putchar(*str);
			str++;
		}

		_putchar('\n');
		return (0);
}
