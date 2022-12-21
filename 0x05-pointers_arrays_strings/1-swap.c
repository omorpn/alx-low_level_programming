#include "main.h"

/**
 * swap_int - functio that swap the value of two integer
 * @a : first number
 * @b :second number
 */

void swap_int(int *a, int *b)
{
	int van;

	van = *a;
	*a = *b;
	*b = van;
}
