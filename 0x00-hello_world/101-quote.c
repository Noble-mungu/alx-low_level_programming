#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Noble Mungu, 2022-03-10\n", 59);
	return (1);
}
