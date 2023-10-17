#include "main.h"

/**
* switch_case - This function prints a string.
* @format: A format.
* @args: A args.
* Return: value.
*/
int switch_case(const char *format, va_list args)
{
	switch (format[0])
	{
		case 'c':
			return (custom_putchar(args));
		break;
		case 's':
			return (putchar_string(args));
		break;
		case 'd':
		case 'i':
			return (custom_int(args));
		break;
		case '%':
			return (custom_precent());
		break;
		default:
			return (0);
	}
}
/**
 * _printf - _printf
 * @format: args
 * Return: leng
*/
int _printf(const char *format, ...)
{
	int counter = 0;
	const char *current_num;
	const char *set_num;
	va_list args;

	if (format == NULL || (format[1] == '\0' && format[0] == '%'))
	{
		va_end(args);
		return (-1);
	}

	va_start(args, format);

	current_num = format;

	while (*current_num != '\0')
	{
		if (*current_num != '%')
		{
			_putchar(*current_num);
			counter++;
			current_num++;
		}
		else
		{
			set_num = current_num + 1;
			counter += switch_case(set_num, args);
			current_num = current_num + 2;
		}
	}

	va_end(args);
	return (counter);
}
