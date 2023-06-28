#include "main.h"
/**
 * handle_print - prints an argument based on its type
 * @fmt: formatted string to print the arguments in
 * @ind: index
 * @list: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates active flags
 * @width: gets width
 * @precision: precision specifier
 * @size: size specifier
 *
 * Return: 1 or argument
 */

int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
<<<<<<< HEAD
	int i, unknow_len = 0, printed_chars = -1;
=======
	int i;
	int unknown_len = 0;
	int printed_chars = -1;
>>>>>>> refs/remotes/origin/master
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};
<<<<<<< HEAD
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list, buffer, flags, width, precision, size));
=======
>>>>>>> refs/remotes/origin/master

	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
<<<<<<< HEAD
		unknow_len += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
=======

		unknown_len += write(1, "%%", 1);

		if (fmt[*ind - 1] == ' ')
			unknown_len += write(1, " ", 1);

>>>>>>> refs/remotes/origin/master
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
				--(*ind);
			return (1);
		}
<<<<<<< HEAD
		unknow_len += write(1, &fmt[*ind], 1);
		return (unknow_len);
=======
		unknown_len += write(1, &fmt[*ind], 1);
		return (unknown_len);
>>>>>>> refs/remotes/origin/master
	}
	return (printed_chars);
}
