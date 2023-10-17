#include "main.h"

/**
* custom_putchar - This function prints a string.
*
* @args: A va_list containing a string.
*
* Return: Char.
*/
int custom_putchar(va_list args)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (1);
}
/**
* putchar_string - This function prints a string.
*
* @args: A va_list containing a string.
*
* Return: Char.
*/
int putchar_string(va_list args)
{
	int length = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
		return (length);
	}
	while (*str)
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
}
