#include "sort.h"

/**
* remover_de_cadenna - counts the length of a string
* @loc: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

listint_t *remover_de_cadenna(listint_t *loc)
{
	if (siguiente(loc))
		loc->next->prev = anterior(loc);
	if (anterior(loc))
		loc->prev->next = siguiente(loc);
	loc->next = NULL;
	loc->prev = NULL;

	return (loc);
}

/**
* swap_nodes - counts the length of a string
* @loc1: the buffer pointer
* @loc2: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void swap_nodes(listint_t *loc1, listint_t *loc2)
{
	listint_t *holder1 = siguiente(loc1), *holder2 = anterior(loc1);

	if (anterior(loc1))
		loc1->prev->next = loc2;
	if (siguiente(loc1))
		loc1->next->prev = loc2;
	loc1->next = siguiente(loc2);
	loc1->prev = anterior(loc2);

	if (anterior(loc2))
		loc2->prev->next = loc1;
	if (siguiente(loc2))
		loc2->next->prev = loc1;
	loc2->next = holder1;
	loc1->prev = holder2;
}

/**
* largo_cadena - counts the length of a string
* @h: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

size_t largo_cadena(listint_t *h)
{
	if (es_loc_cad(h))
		return (largo_cadena(siguiente(h)) + 1);
	return (0);
}

/**
* add_dnodeint_end - asd
* @head: the buffer pointer
* @n: the buffer pointer
* ---------------------------------
* Return: listint_t
*/

listint_t *add_dnodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo_nodo = NULL;
	listint_t *aux = *head;

	if (!head)
		return (NULL);

	nuevo_nodo = crear_nodo(n);
	if (!nuevo_nodo)
		return (NULL);
	if (!*head)
	{
		*head = nuevo_nodo;
		return (nuevo_nodo);
	}
	while (siguiente(aux))
		aux = siguiente(aux);
	insertar_despues(nuevo_nodo, aux);
	return (nuevo_nodo);
}
