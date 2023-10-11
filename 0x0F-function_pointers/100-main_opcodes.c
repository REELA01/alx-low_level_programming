#include <stdio.h>
#include <stdlib.h>

/**
 * main - get arguments
 * @argc: parameter
 * @argv: parameter
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int b, i;
	char *arr_code = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr_code[i]);
			break;
		}
		printf("%02hhx ", arr_code[i]);
	}
	return (0);
}
