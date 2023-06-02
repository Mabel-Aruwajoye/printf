#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr->val_i;
	int width = 0;

	for (curr->val_i = *i + 1; format[curr->val_i] != '\0'; curr->val_i++)
	{
		if (is_digit(format[curr->val_i]))
		{
			width *= 10;
			width += format[curr->val_i] - '0';
		}
		else if (format[curr->val_i] == '*')
		{
			curr->val_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr->val_i - 1;

	return (width);
}
