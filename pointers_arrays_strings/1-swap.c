#include "main.h"
/**
 * swap_int - swap a with b, with temp memory in c
 * @a : input
 * @b : input
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
