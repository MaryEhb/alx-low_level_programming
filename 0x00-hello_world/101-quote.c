#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print using write()
 *
 * Return: 1 (not Success)
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, c, 59);

	return (1);
}
