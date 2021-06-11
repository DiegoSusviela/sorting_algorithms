#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, largo = size;
	int flag = 0;

	size--;
	while (size > 0)
	{
		flag = 0;
		for (i = 0; i <= size - 1; i++)
			if (array[i] > array[i + 1])
			{
				swap_next(array, i);
				print_array(array, largo);
				flag = 1;
			}
		if (!flag)
			return;
		size--;
	}
}
