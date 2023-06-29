#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function is the entry point of the program and is responsible for
 * executing the program's logic.
 *
 * Return: 0 on success
 */

int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a;
/*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	p += 2;
	printf("a[2] = %d\n", *p);
	return (0);
}
