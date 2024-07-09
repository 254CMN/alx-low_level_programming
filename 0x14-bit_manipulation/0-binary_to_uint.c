#include<stdio.h>
#include<string.h>

/**
 * binary_to_unit - Function that converts binary to unsigned int
 * @sum - Return value
 * @b - String of 0s amd 1s to be converted
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
				sum = sum + (b[i] * n);
			}
			n = n * 2;
		}
	}
	return (sum);
}
