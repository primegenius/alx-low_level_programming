#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a statement to the standard error
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: 1 (Success)
*/
int main(void)
{
        fprintf(stderr, "\"And that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
        return (1);
}
