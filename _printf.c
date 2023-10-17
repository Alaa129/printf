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
	
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(args);
		return (-1);
	}


	current_num = format;

	while (*current_num != '\0')
	{
		if (*current_num == '%')
		{
			set_num = current_num + 1;
			counter += switch_case(set_num, args);
			current_num = current_num + 2;
		}
		else
		{
			_putchar(*current_num);
			counter++;
			current_num++;
		}
	}

	va_end(args);
	return (counter);
}

int main(void)
{
    	int len;
    	int len2;

    	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
    	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
    	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
    	_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');
    	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
    	len = _printf("Percent:[%%]\n");
    	len2 = printf("Percent:[%%]\n");
    	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);

	len = _printf("%%");
	len2 = printf("%%");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("Should print a single percent sign:%%\n");
	len2 = printf("Should print a single percent sign:%%\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("%");
	len2 = printf("%");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
    return (0);
}