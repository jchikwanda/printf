#include "main.h"

/**
 * _printf - Prints output according to a format specifier.
 *
 * @format: A character string that contains the format string.
 *          Format specifiers are preceded by the % character.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, bytes = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			do {
				i++;
			} while (format[i] == ' ');

			handle_switch(&i, &bytes, format, args);
		}
		else
		{
			_putchar(format[i]);
			bytes++;
		}
		i++;
	}

	va_end(args);
	return (bytes);
}
