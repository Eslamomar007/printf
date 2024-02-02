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
	int i = 0, j;
	int printed_num;
	specifer cases[] = {
		{"c", case_charecter},
		{"s", case_string},
		{"%", case_percent},
	};
	va_list list;

	va_start(list, format);

	if (format[i] == '\0')
		return (-1);
	/*printed_num = parse(format, specifer cases[], list);*/
	while (format[i] != '\0')
	{	j = 0;
		printed_num = 0;
		while (j < 3)
		{
			if (cases[j].format == &format[i])
			{
<<<<<<< HEAD
			/*function expects an int not a char type*/
				int var_char = va_arg(list, int);

				_putchar(var_char);
				printed_num++;
			}
			if (format[i] == 's')
			{
				char *var_string = va_arg(list, char *);
				int k;

				for (k = 0; var_string[k] != '\0'; var_string++)
				{
					_putchar(*var_string);
					printed_num++;
				}
			}
			if (format[i] == 'd')
				printed_num += _int_print(list);

			if (format[i] == 37)
			{
				_putchar('%');
=======
				cases[j].fun_t(list);
>>>>>>> b8567a7f9701435a4230153c911c099579cb2d62
				printed_num++;
				break;
			}
			j++;
		}
		if (format[i + 1] == '\0')
		_putchar('\n');
	i++;
	}
	va_end(list);
	return (printed_num);
}
