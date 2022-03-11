#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @separator: separator
 * @n: number of args
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *format_str;

	p_sel f_sel[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
	};

	va_start(ap, format);

	format_str = (char *)format;

	while (i < strlen(format))
	{

		while (j < 4)
		{
			if (*f_sel[i].a_type == format[i])
				f_sel[i].f(ap);
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}

void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


void p_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void p_str(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}

