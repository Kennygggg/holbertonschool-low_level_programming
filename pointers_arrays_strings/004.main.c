//4. strpbrk
//Write a function that searches a string for any of a set of bytes.

//Prototype: char *_strpbrk(char *s, char *accept);
//The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
//Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
//FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

//julien@ubuntu:~/$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "wello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
//julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
//julien@ubuntu:~/$ ./4-strpbrk 
//llo, world
//julien@ubuntu:~/$ 
