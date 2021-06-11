#ifndef FUN_AUX_H
#define FUN_AUX_H

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

/* fun_aux1 */
listint_t *siguiente(listint_t *loc);
listint_t *anterior(listint_t *loc);
listint_t *es_loc_cad(listint_t *loc);
void insertar_antes(listint_t *a_insertar, listint_t *lugar);
void insertar_despues(listint_t *a_insertar, listint_t *lugar);

listint_t *crear_nodo(int n);
listint_t *add_dnodeint(listint_t **head, int n);
listint_t *remover_de_cadenna(listint_t *loc);
void swap_nodes(listint_t *loc1, listint_t *loc2);
size_t largo_cadena(listint_t *h);
listint_t *add_dnodeint_end(listint_t **head, const int n);

void swap_next(int *array, size_t i);
int info_dato(listint_t *nodo);

/* fun_print */
size_t print_dlistint(listint_t *h);
int _putchar(char c, int fd);
void _puts(char *str);
void _puts2(char *str);
int print_number(int n);
void imprimir_nodo(listint_t *loc);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* fun_free */
void liberar_nodo(listint_t *a_liberar);
void free_dlistint(listint_t *head);
int delete_dnodeint_at_index(listint_t **head, unsigned int index);


#endif /* FUN_AUX_H */
