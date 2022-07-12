#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int output;
	conver_t f_list[] = {
		{"c", print_c},
		{"s", print_str},
		{"%", print_per},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	output = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (output);
}
