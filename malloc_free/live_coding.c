#include <stdio.h>
#include <stdlib.h>

typedef struct cat_s {
    char c;
    char d;
} cat_t;

typedef struct dog_s {
    int i;
    char c;
} dog_t;

typedef struct bird_s {
    int i;
    int j;
} bird_t;

typedef struct mouse_s {
    char c;
    int i;
} mouse_t;

typedef struct snake_s {
    char c;
    double d;
} snake_t;

int main(void) {
    // Declare a cat, a dog, a bird, a mouse
	cat_t cat;
	dog_t dog;
	bird_t bird;
	mouse_t mouse;
	snake_t snake;

    // Initialize them
	cat.c = '0';
	cat.d = '0';

	dog.i = 0;
	dog.c = '0';

	bird.i = 0;
	bird.j = 0;

	mouse.c = '0';
	mouse.i = 0;

	snake.c = '0';
	snake.d = 0;

    // Display the address of the struct, and the fields inside them
	printf("Address of struct cat: %p\n", (void *)&cat);
	printf("Addresss of cat.c: %p\n", (void *)&cat.c);
	printf("Addresss of cat.d: %p\n\n", (void *)&cat.d);

	printf("Address of struct dog: %p\n", (void *)&dog);
	printf("Addresss of dog.i: %p\n", (void *)&dog.i);
	printf("Addresss of dog.c: %p\n", (void *)&dog.c);

    return (0);
}
