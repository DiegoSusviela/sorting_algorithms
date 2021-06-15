#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* selection_sort - counts the length of a string
* @array: the buffer pointer
* @size: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void selection_sort(int *array, size_t size)
{
	unsigned int candidato, pos1, pos2;

	if (!array || !size)
		return;

	for (pos1 = 0; pos1 < size; pos1++)
	{
		candidato = pos1;
		pos2 = pos1 + 1;
		while (array[pos2])
		{
			if (array[pos2] < array[candidato])
				candidato = pos2;
			pos2++;
		}
		if (candidato != pos1)
		{
			swap_elements(array, candidato, pos1);
			print_array(array, size);
		}
	}
}
