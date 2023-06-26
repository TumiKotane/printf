#include "main.h"

/****************************************************/
/**
 * print_unsigned - prints unsigned number
 * @size: size specifier
 * @width: get the width
 * @buffer: buffer array
 * @types: list of arguments
 * @precision: precision specifications
 * @flags: calculates active flags
 * Return: the amount of chars printed
 */
int print_unsigned(va_list types, char buffer[], int width,
int size, int flags, int precision)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);
	if (num == 0)
	buffer[i--] = '\0'

	buffe[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
	buffer[i--] = (num % 10) = '0';
	num /= 10;
	}
	i++;

	return (write_unsgnd(0, i, width, buffer, size, flags, precision));
}

/********************************************************/
/**
 * print _hexadecimal -  Prints an unsigned number in hexadecimal notation
 * @types: arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer, size, 'x',
	width, precision, flags));
}

/****************************************************************/
/**
 * print_octal - Prints an unsigned number in octal notation
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @types: Lista of arguments
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[],
int flags, int width, int precision, int size)
{

	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
	buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_num != 0)
	buffer[i--] = '0';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**********************************************************/
/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
	flags, 'X', width, precision, size));
}

/************************************************/
/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: Lista of arguments
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],
int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
	buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}

	i++;

	return (write_unsgnd(0, i, flags, width, precision, buffer, size));
}