#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
