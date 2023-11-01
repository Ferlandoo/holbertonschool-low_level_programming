#include "main.h"

/**
 * _isdigit - check for digits
 * @c: check character
 * Return:1 for digits and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
