#ifndef HOLBERTON
#define HOLBERTON

#include <stdarg.h>
/**
 * struct format_types - Contain the function to print using the format
 *
 * @fmt: Format
 * @f: Function
 */
struct format_types
{

	char *fmt;
	int (*f)();
};
typedef struct format_types p_func;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_int(int n);
int print_un_int(unsigned int n);
int base_conv(unsigned int num, int base, int mayus);

int p_char(va_list valist);
int p_int(va_list valist);
int p_dint(va_list valist);
int p_str(va_list valist);
int p_rev(va_list valist);
int p_bin(va_list valist);
int p_oct(va_list valist);
int p_hex(va_list valist);
int p_hex_case(va_list valist);
int p_un_int(va_list valist);

#endif
