#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests _islower function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int r;

    r = _islower('H');
    printf("%d\n", r);  /* Expected output: 0*/
    r = _islower('o');
    printf("%d\n", r);  /* Expected output: 1*/
    r = _islower(108);
    printf("%d\n", r);  /* Expected output: 1*/

    return (0);
}
