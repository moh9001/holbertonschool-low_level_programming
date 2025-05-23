#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *multiply(char *num1, char *num2);
int _putchar(char c);
int is_digit(char *s);
int _strlen(char *s);
char *multiply(char *num1, char *num2);
void error(void *ptr1, void *ptr2);
#endif /* MAIN_H */
