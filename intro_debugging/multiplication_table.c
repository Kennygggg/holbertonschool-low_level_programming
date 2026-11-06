#include <stdio.h>

void print_table(int size)
{
    int row;
    int column;

    for (row = 1; row <= size; row++)
    {
	    for (column = 1; column <= size; column++)
	    {
		    printf("%d ", row * column);
	    }
	    printf("\n");
    }



}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    print_table(4);
    return 0;
}
