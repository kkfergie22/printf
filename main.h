#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *symbol;
	int (*f)(va_list);
};

/**
* typedef - defines a type for struct convert
*
*/

typedef struct convert conver_t;

/*Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list);
int print_s(va_list);
int print_per(va_list);
int print_int(va_list);
int print_num(va_list);
int print_bi(va_list);
int print_rev(va_list arg);
int rot13(va_list);
int unsigned_int(va_list);
int print_oct(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/*Helper functions*/
unsigned int base_length(unsigned int, int);
char *rev_str(char *);
void write_b(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_num(unsigned int);


#endif

