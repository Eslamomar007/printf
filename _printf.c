#include "main.h"
#include <stdarg.h>
/**
 * _printf- prints out a character into std output
 *
 * @format: format string with string literals and specifiers
 * @...: variable number of arguments
 * Return: number of charachters printed
 */
int _printf(const char *format, ...)
{
	int i, j;
	int printed_num;
	va_list list;

	va_start(list, format);
	i = 0;
	printed_num = 0;
	if (format[i] == '\0')
		return (-1);
	/*printed_num = parse(format, specifer cases[], list);*/
	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{
			if (format[i] == 'c')
			{
				int var_char = va_arg(list, int);
				printed_num +=_putchar(var_char);
			}
			if (format[i] == 's')
			{
				char *var_string = va_arg(list, char *);
				j = 0;
				for (; var_string[j] != '\0'; j++, var_string++)
					printed_num += _putchar(*var_string);
			}
			if (format[i] == 'd')
				printed_num += _int_print(list);

			if (format[i] == 37)
				printed_num += _putchar('%');
			j++;
		}
		printed_num += _putchar(format[i]);
	}
	va_end(list);
	return (printed_num);
}
