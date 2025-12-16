#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "sort.h"
/**
 * swap_ints - swaps two integers
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
 * lomuto_partition - Lomuto partition scheme
 * @array: array of integers
 * @low: starting index
 * @high: ending index (pivot)
 * @size: size of array
 *
 * Return: pivot final index
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low;
int j;
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
i++;
}
}
if (i != high)
{
swap_ints(&array[i], &array[high]);
print_array(array, size);
}
return (i);
}
/**
 * quick_sort_recursive - recursive quick sort
 * @array: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of array
 */
static void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int p;
if (low < high)
{
p = lomuto_partition(array, low, high, size);
quick_sort_recursive(array, low, p - 1, size);
quick_sort_recursive(array, p + 1, high, size);
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
