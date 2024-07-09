#include<stdio.h>
#include<string.h>

/**
 * binary_to_uint - Function that converts binary to unsigned int
 * Return 'sum' if successful
 * Return 0 if not successful
 *
 */
unsigned int binary_to_unit(const char *b)
{
	int sum = 0;
	int i;
	size_t j;
	int n;

	for (i = strlen(b); i <= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1' || b == NULL)
			return (0);
		else
		{
			for (j = 0; j < strlen(b) ; j++)
			{
				n = 1;
				sum = sum + (b[i] * n;
			}
			n = n * 2;
		}
	}
	return (sum);
}
