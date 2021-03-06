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
* ordenador_no_eficiente - counts the length of a string
* @pos1: the buffer pointer
* @pos2: the buffer pointer
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

int ordenador_no_eficiente(int *array, int pos1, int pos2, size_t size)
{
	int pivot = pos2, izq = pos1 - 1, der = pos1;

	while (der < pos2)
	{
		if (array[der] < array[pivot])
		{
			izq++;
			if (izq != der)
			{
				swap_elements(array, der, izq);
				print_array(array, size);
			}
		}
		der++;
	}
	if (array[pos2] < array[izq + 1])
	{
		swap_elements(array, izq + 1, pos2);
		print_array(array, size);
	}
	return (izq + 1);
}

/**
* quick_recur - counts the length of a string
* @array: the buffer pointer
* @inicio: the buffer pointer
* @final: alkdsnasjkld
* @size: adlkjnaslkjd
* ---------------------------------
* Return: the length of the string
*/

void quick_recur(int *array, int inicio, int final, size_t size)
{
	int pivote;

	if (inicio < final)
	{
		pivote = ordenador_no_eficiente(array, inicio, final, size);
		quick_recur(array, inicio, pivote - 1, size);
		quick_recur(array, pivote + 1, final, size);
	}
	/*
	* pivote = ordenador(array, inicio, final, size);
	* if (inicio < pivote - 1)
	*	quick_recur(array, inicio, pivote - 1, size);
	* if (final > pivote + 1)
	*	quick_recur(array, pivote + 1, final, size);
	*/
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

	quick_recur(array, 0, final, size);
}
