#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
    int num; /* normal variable declaration */
    int *p; /* pointer variable declaration */

    num = 10; /* Initialize num to 10 */
    p = &num; /* Initialize p to the address of num */

    /* Printing the memory address of num */
    printf("Memory Address of num: %p\n", &num); /* using num */
    printf("Memory Address of num using p: %p\n", p); /* using p */

    /* Printing the value */
    printf("Value of num: %d\n", num); /* using num */
    printf("Value of num by dereferencing p: %d\n", *p); /* by dereferencing p */

    *p = 20; /* assigning a new value to num using p */
    printf("New value of num: %d\n", num); /* Printing new value of num */

    return (0);
}
