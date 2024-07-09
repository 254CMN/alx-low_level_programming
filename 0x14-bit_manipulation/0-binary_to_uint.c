#include<stdio.h>
#include<string.h>
/**
 * @binary_to_uint - Function that converts binary to unsigned int
 * Return unsigned int if successful
 * Return 0 if not successful
 *
 */
unsigned int binary_to_unit(const char *b)
{
	int sum = 0;
	int i;
	int j;

	for (i = strlen(b); i <= 0; i--);
	{
		if (b[i] != '0' || b[i] != '1' || b == NULL);
			return 0;
		else
		{
			for (j = 0; j < strlen(b) ; j++);
			{
				sum = b[i] * 2power j;
			}
		}
	}
	return sum;
}
