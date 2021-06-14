#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"


void selection_sort(int *array, size_t size)
{
	int candidato, pos1, pos2;

	for (pos1 = 0; pos1 < size; pos1++)
	{
		candidato = pos1;
		pos2 = pos1 + 1;
		while (pos2)
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
