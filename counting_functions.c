/**
 * count_chars_in_float - counts the number of characters in a float
 *
 * @f: the float to count the characters in
 *
 * Return: the number of characters in the float
 */
int count_chars_in_float(float f)
{
	int count = 0, num;
	float fraction;

	if (f < 0)
	{
		count++;
		f = -f;
	}

	num = (int) f;
	fraction = f - num;

	if (num == 0)
	{
		count++;
	}
	else
	{
		while (num != 0)
		{
			count++;
			num /= 10;
		}
	}

	if (fraction != 0)
	{
		count++;
		while (fraction != 0)
		{
			count++;
			fraction *= 10;
			fraction -= (int) fraction;
		}
	}

	return (count);
}

/**
 * _strlen - custom strlen function
 *
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	if (!s)
	{
		return (0);
	}

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * intlen - counts the number of digits in an integer, including the sign
 *
 * @n: the integer to count the digits in
 *
 * Return: the number of digits in the integer, including the sign
 */
int intlen(int n)
{
	int len = 0;

	if (n < 0)
		len++;

	if (n == 0)
		len++;
	else
	{
		while (n != 0)
		{
			len++;
			n /= 10;
		}
	}

	return (len);
}
