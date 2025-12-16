#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap_ints - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 */
static void swap_ints(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
/**
 * lomuto_partition - partitions the array using Lomuto scheme
 * @array: array of integers
 * @low: starting index
 * @high: ending index (pivot)
 * @size: size of the array (for printing)
 *
 * Return: index of the pivot after partition
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (i + 1 != high)
{
swap_ints(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}
/**
 * quick_sort_recursive - recursive Quick sort helper
 * @array: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 */
static void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pi;
if (low < high)
{
pi = lomuto_partition(array, low, high, size);
quick_sort_recursive(array, low, pi - 1, size);
quick_sort_recursive(array, pi + 1, high, size);
}
}
/**
 * quick_sort - sorts an array using Quick sort (Lomuto)
 * @array: array of integers
 * @size: number of elements
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quick_sort_recursive(array, 0, (int)size - 1, size);
}

