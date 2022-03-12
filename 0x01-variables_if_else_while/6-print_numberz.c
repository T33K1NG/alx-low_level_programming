#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
