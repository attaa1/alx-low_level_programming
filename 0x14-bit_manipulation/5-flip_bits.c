#include "main.h"

/**
 * flip_bits - number of bits to change counter
 * from one to another
 * @n: fst number
 * @m: snd number
 *
 * Return: bits number to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
