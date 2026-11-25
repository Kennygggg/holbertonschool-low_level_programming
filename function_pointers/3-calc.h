#ifndef CALC_H
#define CALC_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

//if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
//if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
//if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
