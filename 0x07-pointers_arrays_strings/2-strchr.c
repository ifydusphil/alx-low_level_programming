#include "main.h"
/**
 * _strchr - function that locates in a string
 * @s: input
 * @c: input
 * Return: Always 0 (Successful)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
