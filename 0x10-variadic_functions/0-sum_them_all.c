#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list num;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(num, n);
	

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, const unsigned int);
	}

	va_end(num);

	return (sum);
}
