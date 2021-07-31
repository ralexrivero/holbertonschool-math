#include "holberton.h"

/**
 * display_complex_number - print complex number
 * Description: print real an imaginary in binary math
 * @c: complex to print
 */

void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%g\n", c.re);
	else if (c.im < 0)
	{
		c.im = -c.im;
		printf("%g - %gi\n", c.re, c.im);
	}
	else
		printf("%g + %gi\n", c.re, c.im);
}
