#include "holberton.h"

/**
 * display_complex_number - print complex number
 * Description: print real an imaginary in binary math
 * @c: complex to print
 */

void display_complex_number(complex c)
{
	printf("%g", c.re);
	if (c.im != 0)
		printf(" + %gi", c.im);
	putchar('\n');
}
