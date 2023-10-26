#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void    print_binary(unsigned long int n)
{
    unsigned long   mask = 1;
    int             i = 0;

    while (mask < n)
    {
        mask <<= 1;
        i++;
    }
    while (i >= 0)
    {
        if (n & mask)
            _putchar('1');
        else
            _putchar('0');
        mask >>= 1;
        i--;
    }
}
