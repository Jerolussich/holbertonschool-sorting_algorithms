#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;
    while (current != NULL)
    {
        // Save the current node
        listint_t *node = current;

        // Find the insertion point
        while (node->prev != NULL && node->prev->n > node->n)
        {
            // Swap the node with its predecessor
            node->prev->next = node->next;
            if (node->next != NULL)
                node->next->prev = node->prev;
            node->next = node->prev;
            node->prev = node->prev->prev;
            node->next->prev = node;
            if (node->prev != NULL)
                node->prev->next = node;
            else
                *list = node;

            // Print the list
            for (listint_t *p = *list; p != NULL; p = p->next)
                printf("%d ", p->n);
            putchar('\n');
        }

        current = current->next;
    }
}
