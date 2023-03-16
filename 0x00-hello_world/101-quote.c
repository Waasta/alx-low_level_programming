#include<stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*code*/
	write(STDERR_FILENO,
      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
      52);
	return 1;
}

