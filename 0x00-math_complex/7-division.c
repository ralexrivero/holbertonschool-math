#include "holberton.h"

/**
 * modulus - returns the modulus
 * @c: the complex
 * Return: the modulus of complex
 */

void division(complex c1, complex c2, complex *c3)
{
c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / (pow(c2.re, 2) + pow(c2.im, 2));
c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / (pow(c2.re, 2) + pow(c2.im, 2));

}
