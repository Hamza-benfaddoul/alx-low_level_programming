#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0, j = 0, k = 0;
    unsigned int sum = 0;

    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        i++;
    }

    while (b[j] != '\0')
    {
        if (b[j] == '1')
            k = 1;
        else
            k = 0;
        sum = sum + k * (1 << (i - 1));
        i--;
        j++;
    }
    return (sum);
}
