#include <stdio.h>
/**
 * main - print the largest prime factor of the 
 * number 612852475143
 * Return (0)
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % 1 == 0)
		{		
			if (n == 1)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}
	
	return(0);
}