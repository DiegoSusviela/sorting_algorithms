#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* bubble_sort - counts the length of a string
* @array: the buffer pointer
* @size: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, largo = size;
	int flag = 0;

	if (!array || !size)
		return;

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
