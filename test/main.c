#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	puts("********************Testing Print F Return Value**********************\n\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("Length by default printf:[%d, %i]\n", len2, len2);
	printf("Length by custom printf:[%d, %i]\n", len, len);

	puts("\n\n*******************Test %%***********************");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	printf("Length by default printf:[%d, %i]\n", len2, len2);
	printf("Length by custom printf:[%d, %i]\n", len, len);

	puts("\n\n*******************Test %c***********************");

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');

	printf("Length by default printf:[%d, %i]\n", len2, len2);
	printf("Length by custom printf:[%d, %i]\n", len, len);

	puts("\n\n*******************Test %s***********************");

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");

	printf("Length by default printf:[%d, %i]\n", len2, len2);
	printf("Length by custom printf:[%d, %i]\n", len, len);

	return (0);
}
