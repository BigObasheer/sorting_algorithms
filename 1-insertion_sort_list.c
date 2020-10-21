#include "sort.h"

/**
 * insertion_sort_list - sorts a list using the insertion sort algorithm
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *current = *list, *next, *final = *list;

        if (*list == NULL)
                return;

        next = (*list)->next;

        while (final->next != NULL)
                final = final->next;

        while (current != final)
        {
                current = next;
                next = next->next;
                while (current->prev->n > current->n)
                {
                        current->prev->next = current->next;
                        if (current->next != NULL)
                                current->next->prev = current->prev;
                        current->next = current->prev;
                        current->prev = current->next->prev;
                        current->next->prev = current;
                        if (current->prev != NULL)
                                current->prev->next = current;
                        if ((*list)->prev != NULL)
                                *list = (*list)->prev;
                        print_list(*list);
                        if (current->prev == NULL)
                                break;
                }
        }
}
