#include "main.h"


/**
 * is_printable - it evaluates if a char is printable
 * @c: its the char to be evaluated.
 * Return: 1 if c is printable, and 0 otherwise
 */
int is_printable(char c)
{
if (c >= 32 && c < 127)

return (1);
return (0);
}


/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: its an array of chars.
 * @i: its the index which to start appending.
 * @ascii_code:its  ASSCI CODE.
 * Return: always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
char map_to[] = "0123456789ABCDEF";

/* The hexa format code is always 2 digits long */
if (ascii_code < 0)
ascii_code *= -1;

buffer[i++] = '\\';
buffer[i++] = 'x';

buffer[i++] = map_to[ascii_code / 16];
buffer[i] = map_to[ascii_code % 16];

return (3);
}

/**
 * is_digit - it verifies if a char is a digit
 * @c: its the char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
if (c >= '0' && c <= '9')
return (1);

return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: its the number to be casted.
 * @size: its the number indicating the type to be casted.
 * Return: return the casted value of num
 */
long int convert_size_number(long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)

return ((short)num);

return ((int)num);
}


/**
 * convert_size_unsgnd - it casts a number to the specified size
 * @num: its the number to be casted
 * @size: the number indicating the type to be casted
 * Return: the casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
if (size == S_LONG)

return (num);
else if (size == S_SHORT)

return ((unsigned short)num);


return ((unsigned int)num);
}