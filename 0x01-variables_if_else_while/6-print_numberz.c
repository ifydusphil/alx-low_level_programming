#include <stdio.h>

/**
 * main - Displays all single digit  numbers from 0 to 9
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
