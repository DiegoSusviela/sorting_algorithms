#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

void swapper(int gap_exp, int *array, int final)
{
	int gap = gap_exp, fin = final;
	int holder  = gap, aux, h2;


	/*printf("gap: %d\n", gap);*/

	/*unsigned int candidato, pos1, pos2;*/

	/*while (pos + gap <= final)
	*{
	*	if (array[pos] > array[pos + gap])
	*	{
	*		swap_elements(array, pos, pos + gap);
	*	}
	*	pos++;
	*}
	*for (pos1 = 0; pos1 + gap < final; pos1++)
	*{
	*	candidato = pos1;
	*	pos2 = pos1 + gap;
	*	while (array[pos2])
	*	{
	*		if (array[pos2] < array[candidato])
	*			candidato = pos2;
	*		pos2+= gap;
	*	}
	*	if (candidato != pos1)
		{
	*		swap_elements(array, candidato, pos1);
	*	}
	}*/

	holder = 0;
	h2 = 0;
	aux = holder + gap;
	while (h2 + gap <= fin)
	{
		while (holder + gap <= fin)
		{
			if (array[holder + gap] >= array[holder])
				holder = holder + gap;
			else
			{
				while ((aux - gap >= 0) && array[aux] < array[aux - gap])
				{
					swap_elements(array, aux - gap, aux);
					aux--;
				}
			}
			aux = holder + gap;
		}
		h2++;
	}
}


/**
* shell_sort - counts the length of gap_exp string
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void shell_sort(int *array, size_t size)
{
	int final = size - 1;
	int gap = 1;

	while ((3*gap) + 1 <= final)
	{
		gap = (3*gap) + 1;
	}
	gap = (gap - 1) / 3;
	while (gap >= 0)
	{
		swapper(gap, array, final);
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
