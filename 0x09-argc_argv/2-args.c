#include <stdio.h>

/**
* main -  print program name
* @argc: arg counter
* @argv: array of command line
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
