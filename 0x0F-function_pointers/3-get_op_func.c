#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Get the op func object
 * @s: character
 * Return: int(*)(int, int)
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f);
}
