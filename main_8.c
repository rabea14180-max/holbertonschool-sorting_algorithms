#include <stdlib.h>
#include "sort.h"
#include <stdio.h>
/**
 * main - Entry point to test quick_sort
 * Return: 0
 */
int main(void)
{
int array[] = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
size_t n = sizeof(array) / sizeof(array[0]);
print_array(array, n);
quick_sort(array, n);
print_array(array, n);
return (0);
}
if (array[i] != array[j])
{
swap(&array[i], &array[j]);
print_array(array, size);
}
