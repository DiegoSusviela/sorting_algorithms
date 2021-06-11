#include "sort.h"

/**
* crear_nodo - counts the length of a string
* @n: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

listint_t *crear_nodo(int n)
{
	listint_t *nodo = malloc(sizeof(listint_t));

	if (!nodo)
		return (NULL);
	/*nodo->n = n;*/
	printf("%d",n);
	nodo->prev = NULL;
	nodo->next = NULL;

	return (nodo);
}

/**
* add_dnodeint - counts the length of a string
* @head: the buffer pointer
* @n: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/


listint_t *add_dnodeint(listint_t **head, int n)
{
	listint_t *nuevo_nodo = NULL;

	if (!head)
		return (NULL);

	nuevo_nodo = crear_nodo(n);
	if (!nuevo_nodo)
		return (NULL);
	if (es_loc_cad(*head))
		insertar_antes(nuevo_nodo, *head);
	*head = nuevo_nodo;
	return (nuevo_nodo);
}

/**
* swap_next - counts the length of a string
* @array: the buffer pointer
* @i: the buffer pointer
* ---------------------------------
* Return: the length of the string
*/

void swap_next(int *array, size_t i)
{
	int aux = array[i];

	array[i] = array[i + 1];
	array[i + 1] = aux;
}

int info_dato(listint_t *nodo)
{
	return (nodo->n);
}
