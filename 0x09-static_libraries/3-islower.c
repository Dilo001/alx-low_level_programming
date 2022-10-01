#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: The character to be checked
 * Return: 1 if c is lowercase.
 * Otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
