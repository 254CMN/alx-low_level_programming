#include<stdio.h>
#include<string.h>

/**
 * binary_to_uint - Function that converts binary to unsigned int
 * Return : unsigned int with decimal value of binary number, or 0 if error
 * @b - pointer to a string of 0s and 1s 
 *
 */
unsigned int binary_to_uint(const char *b)
{
       unsigned	int sum = 0;
        int i;

        if (!b)
            return (0);
        for (i = 0; b[i] != '\0'; i++)
        {
            if (b[i] != '0' && b[i] != '1')
                return (0);
            else
            {
                sum <<= 1;
                if (b[i] == '1')
                    sum += 1;
            }
        }
        return (sum);
}

