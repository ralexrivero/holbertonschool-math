#include "holberton.h"

/**
 * modulus - returns the modulus
 * @c: the complex
 * Return: the modulus of complex
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
