#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to be updated
 * @to: the new string to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
