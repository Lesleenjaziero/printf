#include "main.h"
#include <stdio.h>

/**
 * main - testing file
 *
 * Return: 0
 */
int main(void)
{
    int n;

    n = _printf("Hello %s\n", "world");
    _printf("%d\n", n);

    n = _printf("%d + %d = %d\n", 2, 3, 5);
    _printf("%d\n", n);

    return (0);
}
