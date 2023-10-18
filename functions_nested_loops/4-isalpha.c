#include "main.h"

/**
 * _isalpha - checks for an alphabetic character; in the standard "C" locale
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
