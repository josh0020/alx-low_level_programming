#include <stdio.h>
#include <sys/syscall.h>
/**
 * main - entry
 * Return: Always 1(success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);
	return (1);
}
