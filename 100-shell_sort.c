#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* swapper - counts the length of gap_exp string
* @final: alkdsnasjkld
* @array: alkdsnasjkld
* @gap: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void swapper(int gap, int *array, int final)
{
	int i, temp, j;

	for (i = gap; i <= final; i += 1)
	{
		temp = array[i];
		for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
		{
			array[j] = array[j - gap];
		}
		array[j] = temp;
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

	if (!array || size < 2)
		return;
	while ((3 * gap) + 1 <= final)
	{
		gap = (3 * gap) + 1;
	}
	while (gap > 0)
	{
		swapper(gap, array, final);
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
