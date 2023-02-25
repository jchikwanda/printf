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
	char *string, character;

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

			switch (format[i])
			{
			case 'c':
				character = va_arg(args, int);
				_putchar(character);
				bytes++;
				break;
			case 's':
				string = va_arg(args, char *);
				bytes += _strlen(string ? string : "(null)");
				print_string(string ? string : "(null)");
				break;
			case '%':
				_putchar('%');
				bytes++;
				break;
			default:
				bytes++;
				i--;
				_putchar(format[i]);
			}
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
