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
int t;
t = *a;
*a = *b;
*b = t;
}
/**
 * lomuto - partitions array using Lomuto scheme
 * @arr: array of integers
 * @l: low index
 * @h: high index
 * @size: size of the array
 *
 * Return: final index of the pivot
 */
static int lomuto(int *arr, int l, int h, size_t size)
{
int pivot, i, j;
pivot = arr[h];
i = l;
for (j = l; j < h; j++)
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
if (i != h)
{
swap(&arr[i], &arr[h]);
print_array(arr, size);
}
return (i);
}
/**
 * qs - recursively sorts array using quicksort
 * @arr: array of integers
 * @l: low index
 * @h: high index
 * @size: size of array
 */
static void qs(int *arr, int l, int h, size_t size)
{
int p;
if (l < h)
{
p = lomuto(arr, l, h, size);
qs(arr, l, p - 1, size);
qs(arr, p + 1, h, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 *               using the Quick sort algorithm (Lomuto)
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
qs(array, 0, size - 1, size);
}
