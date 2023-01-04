#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/*Base condition*/
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
