#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

void orderar_izq(listint_t *list, listint_t *loc, int largo);

void ordenar_der(listint_t *list, listint_t *loc, int largo)
{
	int flag = 0, iter = 1;

	while (iter < largo)
	{
		if (info_dato(loc) > info_dato(siguiente(loc)))
		{
			swap_nodes_1(siguiente(loc), loc);
			if (loc == list)
				list = anterior(loc);
			print_list(list);
			flag = 1;
		}
		else
			loc = siguiente(loc);
		iter++;
	}
	if (!flag)
		return;
	orderar_izq(list, anterior(loc), largo - 1);
}
void orderar_izq(listint_t *list, listint_t *loc, int largo)
{
	int flag = 0, iter = 1;

	while (iter < largo)
	{
		if (info_dato(loc) < info_dato(anterior(loc)))
		{
			swap_nodes_1(anterior(loc), loc);
			if (!anterior(loc))
				list = loc;
			print_list(list);
			flag = 1;
		}
		else
			loc = siguiente(loc);
		iter++;
	}
	if (!flag)
		return;
	ordenar_der(list, siguiente(loc), largo - 1);
}
/**
* cocktail_sort_list - counts the length of a string
* @list: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void cocktail_sort_list(listint_t **list)
{
	listint_t *loc = *list;
	int largo = 0;

	if (!list || !*list || !siguiente(*list))
		return;

	largo = largo_cadena(*list);
	ordenar_der(*list, loc, largo);
}
