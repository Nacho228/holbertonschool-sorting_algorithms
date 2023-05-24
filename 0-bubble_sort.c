#include "sort.h"

/**
 * bubble_sort - sorts an array of int in ascending order.
 * @array: the array to sort.
 * @size: size of the array.
 * Return: void.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				_swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}	
	}
}

/**
 * _swap - swap int a and int b.
 * @a: b.
 * @b: a.
 * Return: void.
 */

void _swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
