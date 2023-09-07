#include <unistd.h>

/**
 * main - Entry point
 * Description: print and that piece of art is useful
 * Return: 1 (fail)
*/

int main(void)
{
	char me[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, me, 59);
	return (1);
}
