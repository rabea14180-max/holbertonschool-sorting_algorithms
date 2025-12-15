#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "sort.h"
/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array
 * @size: Number of elements in the array
 *
 * Description: This function prints the elements of an array
 * separated by commas, followed by a new line.
 */
void print_array(const int *array, size_t size)
{
size_t i;
for (i = 0; i < size; i++)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: Pointer to the array
 * @size: Number of elements in the array
 *
 * Description: This function sorts an array in ascending order.
 * After each swap of two elements, the array is printed.
 * If the array is already sorted, the function stops early.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
int swapped;
if (!array || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
swapped = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j]
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
