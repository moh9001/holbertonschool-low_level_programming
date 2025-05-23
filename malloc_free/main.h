#ifndef MAIN_H
#define MAIN_H



char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void print_grid(int **grid, int width, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str); 

#endif
