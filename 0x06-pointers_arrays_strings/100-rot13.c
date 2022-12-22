#include "main.h"

/**
 * *rot13 - function that string using rot13
 * @str: string
 *Return: encoded string
 */
char *rot13(char *str)
{
	int x, y;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdfghijklmnopqrstuvwxy";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdfghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (str[x] == input[y])
			{
				str[x] = output[y];
				break;
			}
		}
	}
	return (str);
}
