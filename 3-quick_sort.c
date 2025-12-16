#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 */
static void swap(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
/**
 * lomuto_partition - partitions array using Lomuto scheme
 * @arr: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 *
 * Return: final pivot index
 */
static int lomuto_partition(int *arr, int low, int high, size_t size)
{
int pivot = arr[high], i = low, j;
for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
if (i != j)
{
swap(&arr[i], &arr[j]);
print_array(arr, size);
}
i++;
}
}
if (i != high)
{
swap(&arr[i], &arr[high]);
print_array(arr, size);
}
return (i);
}
/**
 * quicksort - recursive quicksort implementation
 * @arr: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of array
 */
static void quicksort(int *arr, int low, int high, size_t size)
{
if (low < high)
{
int p = lomuto_partition(arr, low, high, size);
quicksort(arr, low, p - 1, size);
quicksort(arr, p + 1, high, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
