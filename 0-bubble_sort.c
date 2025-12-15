#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: Pointer to the array
 * @size: Number of elements in the array
 *
 * Description: This function sorts an array in ascending order
 * using the Bubble sort algorithm. The array is printed after
 * each swap of two elements.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
int swapped;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
swapped = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swapped = 1;
print_array(array, size);
}
}
if (!swapped)
break;
}
}
