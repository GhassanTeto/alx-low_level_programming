#include "main.h"

/**
 * string_toupper - Changes lowercase to uppercase
 * @str: pointer
 * Return: char
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
