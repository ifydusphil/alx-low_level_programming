#include <stdio.h>

/**
 * main - Displays the lowercase alphabet in reverse order
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
