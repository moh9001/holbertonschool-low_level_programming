#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests _isalpha function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    printf("%d\n", r);  /* Expected output: 1 */
    r = _isalpha('o');
    printf("%d\n", r);  /* Expected output: 1 */
    r = _isalpha(108);
    printf("%d\n", r);  /* Expected output: 1 */
    r = _isalpha(';');
    printf("%d\n", r);  /* Expected output: 0 */

    return (0);
}
