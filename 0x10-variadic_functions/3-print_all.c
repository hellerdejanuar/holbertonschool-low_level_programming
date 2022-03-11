#include "variadic_functions.h"

/**
 * print_all - print various types of args followed by newline
 * @format: number and type of args
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	size_t i = 0;
	int j = 0;
	char *sep = "";

	p_sel f_sel[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
	};

	va_start(ap, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (*f_sel[j].a_type == format[i])
			{
				printf("%s", sep);
				f_sel[j].f(ap);
				sep = ", ";
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}

/**
 * p_char - print char
 * @ap: variable args list
 */
void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * p_int - print int
 * @ap: variable args list
 */
void p_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * p_float - print float
 * @ap: variable args list
 */
void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * p_str - print string
 * @ap: variable args list
 */
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

