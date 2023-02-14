#include "main.h"

/**
 * print_number - prints an integer using only putchar
 *
 * @n: the integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_string - prints a string using putchar
 *
 * @str: the string to print
 */
void print_string(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
		_putchar(str[i]);
}

/**
 * print_float - prints a float using putchar()
 *
 * @f: the float to print
 * @precision: the number of decimal places to print
 */
void print_float(float f, int precision)
{
	int whole = (int) f;
	float fraction = f - whole;
	int i;

	if (f < 0)
	{
		_putchar('-');
		whole = -whole;
		fraction = -fraction;
	}

	print_number(whole);

	if (precision > 0)
	{
		_putchar('.');

		for (i = 0; i < precision; i++)
		{
			fraction *= 10;
			_putchar('0' + (int) fraction);
			fraction -= (int) fraction;
		}
	}
}
