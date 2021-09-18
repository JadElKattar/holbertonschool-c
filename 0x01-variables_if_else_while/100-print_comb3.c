#include <stdio.h>
/* Doing Project 11 */

/**
 *main - print different combinations of double-digit numbers
 *Return: 0 (Success)
 */
int main(void)
{
	int nb1;
	int nb2;

	for (nb1 = 0; nb1 < 10; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 < 10; nb2++)
		{
			putchar(nb1 + '0');
			putchar(nb2 + '0');
		
			if (nb1 != 8 || nb2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
