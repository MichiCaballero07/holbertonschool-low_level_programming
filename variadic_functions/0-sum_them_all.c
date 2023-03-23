#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: parameters
 * @...: variable list of arguments
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, m;
va_list parametros;
if (n == 0)
return (0);
va_start(parametros, n);
for (i = m = 0; i < n; i++)
{
m += va_arg(parametros, int);
}
va_end(parametros);
return (m);

}
