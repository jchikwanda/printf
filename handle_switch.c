#include "main.h"

/**
 * handle_switch - handles printf %, c and s
 * @args: va_list object
 * @bytes: tracks the length of the printed content
 * @index: tracks the current position of list
 * @format: string to containing format specifier
 * Return: Nothing on success
 */
void handle_switch(int *index, int *bytes, const char *format, va_list args)
{
	char *string, character;

	switch (format[*index])
	{
	case 'c':
		character = va_arg(args, int);
		_putchar(character);
		*bytes = *bytes + 1;
		break;
	case 's':
		string = va_arg(args, char *);
		*bytes = *bytes + _strlen(string ? string : "(null)");
		print_string(string ? string : "(null)");
		break;
	case '%':
		_putchar('%');
		*bytes = *bytes + 1;
		break;
	default:
		*bytes = *bytes + 1;
		*index = *index - 1;
		_putchar(format[*index]);
	}
}
