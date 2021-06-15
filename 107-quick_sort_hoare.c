#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* ordenador - counts the length of a string
* @pos1: the buffer pointer
* @pos2: the buffer pointer
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

int ordenador(int *array, int pos1, int pos2, size_t size)
{
	unsigned int pivote = pos2, izq = pos1, der = pos2 - 1;

	while (izq < der)
	{
		if (array[der] < array[pivote] && array[izq] > array[pivote])
		{
			swap_elements(array, izq, der);
			print_array(array, size);
		}
		if (array[izq] < array[pivote])
			izq++;
		if (array[der] > array[pivote] && der)
			der--;
	}
	if (array[izq] > array[pivote])
	{
		swap_elements(array, izq, pivote);
		print_array(array, size);
	}
	else
	{
		if (izq + 1 < pivote)
		{
			swap_elements(array, izq + 1, pivote);
			print_array(array, size);
		}
		else
			izq = pivote;
	}
	return (izq);
}

/**
* quick_recur_1 - counts the length of a string
* @array: the buffer pointer
* @inicio: the buffer pointer
* @final: alkdsnasjkld
* @size: adlkjnaslkjd
* ---------------------------------
* Return: the length of the string
*/

void quick_recur_1(int *array, int inicio, int final, size_t size)
{
	int pivote;

	/*if (inicio < final)
	*{
	*	pivote = ordenador_no_eficiente(array, inicio, final, size);
	*	quick_recur(array, inicio, pivote - 1, size);
	*	quick_recur(array, pivote + 1, final, size);
	*}
	*/

	pivote = ordenador(array, inicio, final, size);
	if (inicio < pivote - 1)
		quick_recur(array, inicio, pivote - 1, size);
	if (final > pivote + 1)
		quick_recur(array, pivote + 1, final, size);
}

/**
* quick_sort - counts the length of a string
* @array: the buffer pointer
* @size: adlkjnaslkjd
* ---------------------------------
* Return: the length of the string
*/

void quick_sort(int *array, size_t size)
{
	int final = size - 1;

	if (!array || size < 2)
		return;

	quick_recur_1(array, 0, final, size);
}