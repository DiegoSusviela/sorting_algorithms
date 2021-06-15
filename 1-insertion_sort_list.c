#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* insertion_sort_list - counts the length of a string
* @list: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *holder, *aux;

	if (!list || !*list || !siguiente(*list))
		return;
	
	holder = *list;
	aux = siguiente(holder);
	while (siguiente(holder))
	{
		if (info_dato(siguiente(holder)) >= info_dato(holder))
			holder = siguiente(holder);
		else
		{
			while (anterior(aux) && info_dato(aux) < info_dato(anterior(aux)))
			{
				swap_nodes_1(anterior(aux), aux);
				if (!anterior(aux))
					*list = aux;
				print_list(*list);
			}
		}
		aux = siguiente(holder);
	}
}
