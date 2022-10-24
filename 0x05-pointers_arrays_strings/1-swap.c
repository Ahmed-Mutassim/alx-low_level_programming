#include "main.h"

/**
 * swap_int - waps the values of two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
