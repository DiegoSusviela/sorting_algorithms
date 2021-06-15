#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* shifter - counts the length of a string
* @final: the buffer pointer
* @feet: the buffer pointer
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void shifter(int *array, size_t feet, size_t final, size_t size)
{
	size_t left, right, swap;

	while ((left = (2 * feet) + 1) <= final)
	{
		swap = feet;
		right = left + 1;
		if (array[swap] < array[left])
			swap = left;
		if (right <= final && array[swap] < array[right])
			swap = right;
		if (swap == feet)
			return;
		swap_elements(array, feet, swap);
		print_array(array, size);
		feet = swap;
	}
}

/**
* maker - counts the length of a string
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void maker(int *array, size_t size)
{
	size_t leg = (size / 2) - 1;

	while (leg)
	{
		shifter(array, leg, size - 1, size);
		leg--;
	}
}

/**
* heap_sort - counts the length of a string
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void heap_sort(int *array, size_t size)
{
	size_t final;

	if (!array || size < 2)
		return;
	maker(array, size);
	final = size - 1;
	while (final)
	{
		swap_elements(array, final, 0);
		print_array(array, size);
		final--;
		shifter(array, 0, final, size);
	}
}
