#include <stdio.h>
/**
 * main - entry point
 * @argc: int
 * @argv:char
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int t = 0;

	while (argc--)
	{
		printf("%s\n", argv[t]);
		t++;
	}
	return (0);
}
