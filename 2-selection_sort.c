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
	size_t i, j, k, i_min;
	int temp;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		i_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i_min])
				i_min = j;
		}
		temp = array[i];
		array[i] = array[i_min];
		array[i_min] = temp;
		if (i != i_min)
		{
			for (k = 0; k < size - 1; k++)
				printf("%d, ", array[k]);
			printf("%d", array[size - 1]);
			printf("\n");
		}
	}
}
