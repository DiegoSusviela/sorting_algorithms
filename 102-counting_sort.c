#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* counting_sort - counts the length of a string
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void counting_sort(int *array, size_t size)
{
	int pos2, candidato = 0, *a_cont, *clone;
	size_t pos1 = 0, aux, total = 0;

	if (!array || size < 2)
		return;
	clone = malloc(sizeof(int) * size);
	if (!clone)
		return;
	while (pos1 < size)
	{
		clone[pos1] = array[pos1];
		if (array[pos1] > candidato)
			candidato = array[pos1];
		pos1++;
	}
	a_cont = malloc(sizeof(int) * (candidato + 1));
	if (!a_cont)
	{
		free(clone);
		return;
	}
	for (pos2 = 0; pos2 <= candidato; pos2++)
		a_cont[pos2] = 0;
	for (pos1 = 0; pos1 < size; pos1++)
		a_cont[array[pos1]] += 1;
	for (pos2 = 0; pos2 <= candidato; pos2++)
	{
		aux = a_cont[pos2];
		a_cont[pos2] = total;
		total += aux;
	}
	for (pos1 = 0; pos1 < size; pos1++)
	{
		array[a_cont[clone[pos1]]] = clone[pos1];
		a_cont[clone[pos1]] += 1;
	}
	print_array(a_cont, candidato + 1);
	free(a_cont);
	free(clone);
}
