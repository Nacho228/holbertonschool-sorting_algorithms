#include "sort.h"
#include <stddef.h>
#include <stdio.h>
/**
 * selection_sort - function that sorts an array of integers
 * @array: an array to be sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)

{
	size_t i, j, min_i;
	int temp;

	for (i = size; i < size - 1; i++)
	{
		min_i = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_i])
				min_i = j;
		}
	}
	temp = array[i];
	array[i] = array[min_i];
	array[min_i] = temp;
}
