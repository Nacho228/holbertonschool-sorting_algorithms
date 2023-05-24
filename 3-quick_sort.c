#include "sort.h"

int partition(int *array, int first, int last, int size);
void aux_func(int *array, int first, int last, int size);
void print_arr(const int *array, size_t size);
void swap(int *a, int *b);

/**
 * quick_sort - function that sorts an array of integers
 * @array: array to sort
 * @size: array size
 */

void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	if (size == 2)
	{

		swap(&array[0], &array[1]);
		print_arr(array, size);
		return;
	}

	aux_func(array, 0, size - 1, size);
}

/**
 * partition - function that separate the array in more arrays
 * @array: array to sort
 * @first: the first element of the array
 * @last: the last element of the array
 * @size: array size
 * Return: the partition element index
 */

int partition(int *array, int first, int last, int size)
{
	int pivot = array[last];
	int j, i = first;

	for (j = first; j < last; ++j)
	{
		if (array[j] < pivot)
		{
			swap(&array[j], &array[i]);
			if (array[j] != array[i])
				print_arr(array, size);
			++i;
		}
	}
	swap(&array[i], &array[last]);
	if (array[last] != array[i])
		print_arr(array, size);

	return (i);
}

/**
 * aux_func - function that parts the array recursively
 * @array: array to sort
 * @first: the first element of the array
 * @last: the last element of the array
 * @size: array size
 */

void aux_func(int *array, int first, int last, int size)
{
	int i;

	if (first < last)
	{
		i = partition(array, first, last, size);
		aux_func(array, first, i - 1, size);
		aux_func(array, i + 1, last, size);
	}
}

/**
 * print_arr - function that prints the elements of an array
 * @array: the array to be printed
 * @size: array size
 */

void print_arr(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while ((array) && (i < size))
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * swap - swap int a for int b
 * @a: a
 * @b: b
 * Return: void
 */

void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
