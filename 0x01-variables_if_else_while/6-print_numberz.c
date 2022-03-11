#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main()
{
	int i = 0;
	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
