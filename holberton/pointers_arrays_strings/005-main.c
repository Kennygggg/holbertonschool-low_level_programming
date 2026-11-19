//5. strstr
//Write a function that locates a substring.

//Prototype: char *_strstr(char *haystack, char *needle);
//The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
//Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
//FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.
//
//julien@ubuntu:~/$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world then then then";
    char *f = "Holberton";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
//julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
//julien@ubuntu:~/$ ./5-strstr 
//world
//julien@ubuntu:~/$ :q

