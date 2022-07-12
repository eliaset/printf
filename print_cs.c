#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_c - function that prints a character
 * @c: char of variable
 * Return: number of characters printed
 */

int print_c(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);

	return (1);
}
/**
 * print_s - function that prints a string
 * @s: operator and pointer
 * Return: number of characters printed
 */

int print_s(va_list s)

{
	unsigned int i;
	char *str;

	str = va_arg(s, char *);
	i = 0;
	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
		return (i);
}
/**
 * print_pe - prints percent sign
 * @args: percent sign
 *
 * Return: number of character printed
 * in this case, return value will always be 1
 */
int print_pe(va_list __attribute__((unused)) pe)
{
	char perc = '%';

	_putchar(perc);

	return (1);
}
