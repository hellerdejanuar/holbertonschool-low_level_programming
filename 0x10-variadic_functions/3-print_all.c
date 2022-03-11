#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @separator: separator
 * @n: number of args
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	size_t i = 0;
	int j = 0;

	p_sel f_sel[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
	};

	va_start(ap, format);

	while (i < strlen(format))
	{

		while (j < 4)
		{
			if (*f_sel[j].a_type == format[i])
			{
				f_sel[j].f(ap);
				printf(", %d", j);
			}
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
	printf("%d", va_arg(ap, int));
}

void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void p_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

