#include "sort.h"

/**
 * bubble_sort - function to sort an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * 
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
    int temp;
    bool swapped;

    do
    {
        swapped = false;

        for (size_t i = 0; i < size - 1; i ++)
        {
            if (array[i] < array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
                print_array(array, size);
            }
        }
    }
    while (swapped == true);
}
