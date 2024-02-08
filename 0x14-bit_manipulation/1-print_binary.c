#include "main.h"

/**
 * _power - func takes the base and calculate it in powers of 2
 * @base : base of the exponent function
 * @pow : power of the exponent function
 * Return: the value of base to power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - prints the binary value of the given number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, res;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int)* 8 - 1);

	while(dev != 0)
	{
		res = n & dev;
		if (res == dev)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			putchar('0');
		}
		dev >>= 1;
	}

}

