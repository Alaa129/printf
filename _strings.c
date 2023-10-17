#include "main.h"
/**
* custom_precent - This function prints a string.
*
* Return: Char.
*/
int custom_precent(void)
{
		_putchar('%');
		return (1);
}

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
* @argsssssssss: A va_list containing a string.
*
* Return: Char.
*/
int putchar_string(va_list argsssssssss)
{
	int len = 0;
	char *str = va_arg(argsssssssss, char *);

	if (str == NULL)
	{
		str = "(null)";
		while (*str)
		{
			len++;
			_putchar(*str);
			str++;
		}
		return (len);
	}
	while (*str)
	{
		len++;
		_putchar(*str);
		str++;
	}
	return (len);
}
