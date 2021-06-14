#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

int ordenador(int *array, int pos1, int pos2, size_t size)
{
	unsigned int pivote = pos2, izq = pos1, der = pos2 - 1;

	while (izq < der)
	{
		if (array[der] < array[pivote] && array[izq] > array[pivote])
		{
			swap_elements(array, izq, der);
			print_array(array, size);
			izq++;
			der--;
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
		if (izq + 1 != pivote)
		{
			swap_elements(array, izq + 1, pivote);
			print_array(array, size);
		}
		else
			izq = pivote;
	}
	return (izq);
}

void quick_recur(int *array, int inicio, int final, size_t size)
{
	int pivote;

	pivote = ordenador(array, inicio, final, size);
	if (inicio < pivote - 1)
		quick_recur(array, inicio, pivote - 1, size);
	if (final > pivote + 1)
		quick_recur(array, pivote + 1, final, size);
}

void quick_sort(int *array, size_t size)
{
	int final = size - 1;

	if (!array || !size)
		return;

		quick_recur(array, 0, final, size);
}
