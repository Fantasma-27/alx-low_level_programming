#include <stdio.h>

/* Declare the function prototype with a brief description */
void before_main(void) __attribute__((constructor));

/**
 * before_main - Function to be executed before main
 *
 * Description: This function is a constructor, and it will be automatically
 *              called before the main function is executed. It prints a
 *              message to the console.
 */
void before_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point of the program
 *
 * Description: This function is the entry point of the program and prints a
 *              message to the console.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
