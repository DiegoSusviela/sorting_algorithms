#include "sort.h"

void swap_next(int *array, int i)
{
	int aux = array[i];

	array[i] = array[i + 1];
	array[i + 1] = aux;
}

void bubble_sort(int *array, size_t size)
{
	int i;

	size--;
	while (size > 0)
	{
		for (i = 0; i <= size - 1; i++)
			if (array[i] > array[i + 1])
				swap_next(array, i);
		size--;
	}
}
