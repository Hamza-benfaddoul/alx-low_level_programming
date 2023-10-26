#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num_bits;
	int i;
	unsigned long int mask;
	int flag;

	flag = 0;
	num_bits = 8 * sizeof(unsigned long int);
	i = num_bits;
	while (i - 1 >= 0)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			_putchar("1");
			flag = 1;
		}
		else if (flag)
			_putchar("0");
		i--;
	}
	if (!flag)
		_putchar("0");
	_putchar("\n");
}
