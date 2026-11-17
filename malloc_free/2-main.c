//2. He who is not courageous enough to take risks will accomplish nothing in life
//Write a function that concatenates two strings.
//
//Prototype: char *str_concat(char *s1, char *s2);
//The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
//if NULL is passed, treat it as an empty string
//The function should return NULL on failure
//julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Best ", "School");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
//julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat
//julien@ubuntu:~/0x0a. malloc, free$ ./2-str_concat | cat -e
//Best School$
//julien@ubuntu:~/0x0a. malloc, free$ 

