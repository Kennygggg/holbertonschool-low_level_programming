//6. Expect the best. Prepare for the worst. Capitalize on what comes
//Write a function that capitalizes all words of a string.

//Prototype: char *cap_string(char *);
//Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }


//julien@ubuntu:~/$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
//julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
//julien@ubuntu:~/$ ./6-cap 
//Expect The Best. Prepare For The Worst. Capitalize On What Comes.
//Hello World! Hello-world 0123456hello World    Hello World.Hello World
//Expect The Best. Prepare For The Worst. Capitalize On What Comes.
//heapsortllo World! Hello-world 0123456hello  World    Hello World.Hello World
//julien@ubuntu:~/$ 
