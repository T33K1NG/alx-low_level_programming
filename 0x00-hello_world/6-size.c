#include <stdio.h>

/**
 * main - prints the string and size
 * of data types
 *
 * Description: usinng the main function
 * the programm prints strings and size of
 * data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	lon long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	pintf("Size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unassigned long)sizeof(f));
	return (0);
}
