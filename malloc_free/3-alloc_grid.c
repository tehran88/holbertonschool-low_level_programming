#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: An input integer, the number of columns.
 * @height: An input integer, the number of rows.
 * Return: pointer to a 2D array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    int **array, i, j;

    /* Check if the width or height is less than or equal to 0 */
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    /* Allocate memory for an array of height pointers to integers */
    array = (int **)malloc(sizeof(int *) * height);
    if (array == NULL)
    {
        return (NULL);
    }

    /* Allocate memory for each row of the 2D array */
    for (i = 0; i < height; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            /* If memory allocation fails, free the previously allocated memory */
            for (j = 0; j < i; j++)
            {
                free(array[j]);
            }
            free(array);
            return (NULL);
        }
    }

    /* Initialize all elements of the 2D array to 0 */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            array[i][j] = 0;
        }
    }

    return (array);
}
