#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

int ordenador(int *array, int pos1, int pos2)
{
	int pivote = pos2, izq = pos1, der = pos2 - 1;

	while (izq < der)
	{
		if (array[der] < array[pivote] && array[izq] > array[pivote])
		{
			swap_elements(array, array[izq], array[der]);
			izq++;
			der--;
		}
		if (array[izq] < array[pivote])
			izq++;
		if (array[der] > array[pivote])
			der--;
	}
	if (array[izq] > array[pivote])
		swap_elements(array, array[izq], array[pivote]);
	return (izq);
}

void quick_recur(int *array, int inicio, int final)
{
	int pivote;

	pivote = ordenador(array, inicio, final);
	if (inicio < pivote - 1)
		quick_recur(array, inicio, pivote - 1);
	if (final > pivote + 1)
		quick_recur(array, pivote + 1, final);
}

void quick_sort(int *array, size_t size)
{
	int final = size - 1;

	quick_recur(array, 0, final);
}
