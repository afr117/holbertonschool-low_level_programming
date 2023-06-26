#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argv; /* Ignore the unused parameter warning */
    printf("%d\n", argc - 1);
    return (0);
}
