#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

void swapper(unsigned int gap_exp, int *array, int final)
{
	unsigned int gap = 3^gap_exp, pos = 0;

	while (pos + gap <= final)
	{
		if (array[pos] > array[pos + gap])
		{
			swap_elements(array, pos, pos + gap);
		}
		pos++;
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
	int gap_exp = 0, iter, final = size - 1;

	while (3^(gap_exp + 1) < size)
		gap_exp++;
	while (gap_exp > 0)
	{
		swapper(gap_exp, array, final);
		print_array(array, size);
		gap_exp--;
	}
}
