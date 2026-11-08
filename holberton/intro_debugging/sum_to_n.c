#include <stdio.h>

int sum_to_n(int n)
{
    int i;
    int sum = 1;

    for (i = n; i < 55; n++)
        i += sum;

    return n;
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    printf("%d\n", sum_to_n(10));
    return 0;
}
