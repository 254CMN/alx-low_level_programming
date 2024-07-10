#include<stdio.h>
#include<string.h>

/**
 * binary_to_uint - Function that converts binary to unsigned int
 * @sum - Return value of function
 * @b - String of 0s amd 1s to be converted
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int i;
	int n = 1;

	for (i = strlen(b); i > 0; i--)
	{
		if (b[i] != '0' || b[i] != '1' || b == NULL)
			return (0);
		else
		{
			sum = sum + (b[i] * n);
			n = n * 2;
		}
	}
	return (sum);
}
