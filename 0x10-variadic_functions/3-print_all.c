#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;
	const char *separator = "";

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;

			case 's':
				str = va_arg(list, char *);

				if (str == NULL)
					str = "(nil)";

				printf("%s%s", separator, str);
				break;

			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}

	va_end(list);

	printf("\n");
}
