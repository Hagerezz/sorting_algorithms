#include "sort.h"

/**
 * swaparray - swap array
 * array: array
 * prev: integar
 * next: integar
*/
void swaparray(int *array, int prev, int next)
{
    int temp;

    temp = array[prev];
    array[prev] = array[next];
    array[next] = temp;
}

/**
 * bubble sort - bubble sort
 * array: array
 * size: number of elements
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    for (i = 1; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swaparray(array, j, j + 1);
                print_array(array, size);
            }
        }   
    }
}