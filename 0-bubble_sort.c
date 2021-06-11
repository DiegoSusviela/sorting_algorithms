#include "sort.h"

void swap_next(int *array, size_t i)
{
	int aux = array[i];

	array[i] = array[i + 1];
	array[i + 1] = aux;
}

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t largo = size;

	size--;
	while (size > 0)
	{
		for (i = 0; i <= size - 1; i++)
			if (array[i] > array[i + 1])
			{
				swap_next(array, i);
				print_array(array, largo);
			}
		size--;
	}
}
