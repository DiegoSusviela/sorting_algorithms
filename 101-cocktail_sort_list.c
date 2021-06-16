#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

void orderar_izq(listint_t *list, listint_t *loc, listint_t *tope_izq, listint_t *tope_der);

void orderar_der(listint_t *list, listint_t *loc, listint_t *tope_izq, listint_t *tope_der);

void orderar_der(listint_t *list, listint_t *loc, listint_t *tope_izq, listint_t *tope_der)
{
	int flag = 0;

	while (loc != tope_der)
	{
		if (info_dato(loc) > info_dato(siguiente(loc)))
		{
			swap_nodes_1(anterior(loc), loc);
			if (!anterior(anterior(loc)))
			{
				list = anterior(loc);
				tope_izq = anterior(loc);
			}
			print_list(list);
			flag = 1;
		}
		else
			loc = siguiente(loc);
	}
	if (!flag)
		return;
	orderar_izq(list, anterior(anterior(loc)), tope_izq, tope_der);
}
void orderar_izq(listint_t *list, listint_t *loc, listint_t *tope_izq, listint_t *tope_der)
{
	int flag = 0;

	while (loc != tope_izq)
	{
		if (info_dato(loc) < info_dato(anterior(loc)))
		{
			swap_nodes_1(anterior(loc), loc);
			if (!anterior(loc))
				list = loc;
			print_list(list);
			flag = 1;
		}
	}
	if (!flag)
		return;
	ordenar_der(list, siguiente(siguiente(loc)), tope_izq, tope_der);
}
/**
* cocktail_sort_list - counts the length of a string
* @list: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void cocktail_sort_list(listint_t **list)
{
	listint_t *tope_der = *list, *tope_izq = *list, *loc = *list;

	if (!list || !*list || !siguiente(*list))
		return;

	while (siguiente(tope_der))
		tope_der = siguiente(tope_der);
	ordenar_der(*list, loc, tope_izq, tope_der);
}