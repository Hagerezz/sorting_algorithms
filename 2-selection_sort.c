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
 * selection_sort - selection sort function
 * array: pointer
 * size: size of array
*/
void selection_sort(int *array, size_t size)
{
    size_t i, j, min;
    
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            swaparray(array, i, min);
            print_array(array, size);
        }
    }
}