#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    n = 98;
    printf("%d is ", n);
    if (n > 0)
    {
        printf("positive\n");
    }

    n = -98;
    printf("%d is ", n);
    if (n < 0)
    {
        printf("negative\n");
    }

    n = 0;
    printf("%d is ", n);
    if (n == 0)
    {
        printf("zero\n");
    }

    return 0;
}
