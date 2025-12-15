#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the Bubble sort algorithm.
 * It prints the array before sorting, prints the array after each swap
 * during sorting, and finally prints the sorted array.
 *
 * Return: 0 on success
 */
int main(void)
{
int array[] = {5, 3, 8, 4, 2};
size_t size = sizeof(array) / sizeof(array[0]);
printf("Original array:\n");
print_array(array, size);
printf("\nSorting steps:\n");
bubble_sort(array, size);
printf("\nSorted array:\n");
print_array(array, size);
return 0;
}
