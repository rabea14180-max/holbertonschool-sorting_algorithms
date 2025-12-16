#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
 * partition - Lomuto partition scheme
 * @array: array of integers
 * @low: start index
 * @high: end index
 * @size: size of array
 * Return: partition index
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high], i = low - 1, j;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
if (array[i] != array[j])
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (array[i + 1] != array[high])
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}
/**
 * quick_sort_recursive - recursive Quick sort
 * @array: array to sort
 * @low: start index
 * @high: end index
 * @size: size of array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(array, low, high, size);
quick_sort_recursive(array, low, pi - 1, size);
quick_sort_recursive(array, pi + 1, high, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}

