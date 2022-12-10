#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabets lower and higher
 *
 * Return 0 (Sucess)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= '2')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
