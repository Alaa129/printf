#include "main.h"
/**
* custom_int - _int.
* @args: va_list.
* Return: int.
*/
int custom_int(va_list args)
{
	int lenght, tenPower, i, d, res, chrcounts = 0, n;

	res = va_arg(args, int);

	if (res < 0)
	{
		_putchar('-');
		chrcounts++;
	}
	if (res == 0)
	{
		_putchar('0');
		return (1);
	}
	n = res;
	lenght = 0;
	while (n != 0)
	{
		n /= 10;
		lenght++;
	}
	tenPower = 1;

	for (i = 1; i <= lenght - 1; i++)
		tenPower *= 10;

	for (i = 1; i <= lenght; i++)
	{
		d = res / tenPower;

		if (res < 0)
		_putchar((d * -1) + 48);
		else
		_putchar(d + '0');

		chrcounts++;
		res -= d * tenPower;
		tenPower /= 10;
	}
	return (chrcounts);
}
