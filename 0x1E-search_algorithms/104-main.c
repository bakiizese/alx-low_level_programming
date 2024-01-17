#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 0, advanced_binary(array, size, 0));
    printf("Found %d at index: %d\n\n", -12, advanced_binary(array, size, -12));
    printf("Found %d at index: %d\n", 6, advanced_binary(array, size, 6));
    return (EXIT_SUCCESS);
}
