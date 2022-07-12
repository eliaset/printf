#ifndef MAIN_H
#define MAIN_H

/**
 * struct pt - tydef struct for conversion specifiers
 * @pt: struct print
 * @print: print funtion specified
 */

typedef struct pt
{
	char *pt;
	int (*print)(va_list ap);
} pt_t;

int _printf(const char *format, ...);
int _putchar(char c);

int print_s(va_list s);
int print_c(va_list c);
int print_i(va_list in);
int print_d(va_list d);


#endif
