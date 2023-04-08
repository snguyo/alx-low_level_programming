#include <stdio.h>

/**
 * This function converts a binary number to an unsigned int
 *
 * b is pointing to a string of 0 and 1 chars.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int decimal = 0;
	int i = 0;
	while (b[i] != '\0')

	{
		if (b[i] == '0' || b[i] == '1')
		{
			decimal = decimal * 2 + (b[i] - '0');
		} else
		{
			return (0);
		}
		i++;
	} return decimal;
}
