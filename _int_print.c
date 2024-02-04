#include "main.h"
/**
 * _int_print- prints out a character into std output
 *
 * list: format string with string literals and specifiers
 * Return: number of charachters printed
 */


int _int_print(va_list list)
{
	int counter = 0;
	int exp = 1;	
	int num = va_arg(list, int);
	int digit;
	int test_num = num / 10;
	while (test_num /exp)
	{
		exp = exp * 10;
	}

	while (exp)
	{
		digit = num / exp;
		_putchar('0' + digit);
		num = num - (digit * exp);
		exp = exp /10;
		counter ++;
	}
	return (counter);
}
