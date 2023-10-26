#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1)
	}
}
