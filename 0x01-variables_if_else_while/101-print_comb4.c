#include <stdio.h>
/* Doing task 101 */

/**
 *main - print combination
 *Result: 0 (Success)
 */
int main(void)
{
	int nb1;
	int nb2;
	int nb3;

	for (nb1 = 0; nb1 < 10; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 < 10; nb2++)
		{
			for (nb3 = nb2 + 1; nb3 < 10; nb3++)
			{
				putchar(nb1 + '0');
				putchar(nb2 + '0');
				putchar(nb3 + '0');
				if (nb1 != 7 || nb2 != 8 || nb3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
