#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int
 * @argv:char
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int t = 0;
	char *n;

	while (--argc)
	{
		for (n = argv[argc]; *n; n++)
		{
			if (*n < '0' || *n > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		t += atoi(argv[argc]);
	}
		printf("%d\n", t);
		return (0);
}
