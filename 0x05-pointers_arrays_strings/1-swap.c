#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
