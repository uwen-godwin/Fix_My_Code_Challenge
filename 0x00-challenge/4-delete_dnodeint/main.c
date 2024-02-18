#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Test program for doubly linked list functions.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;
    int values[] = {0, 1, 2, 3, 4, 98, 402, 1024};
    size_t num_values = sizeof(values) / sizeof(values[0]);
    size_t i;

    for (i = 0; i < num_values; i++) {
        if (add_dnodeint_end(&head, values[i]) == NULL) {
            fprintf(stderr, "Failed to add node with value %d\n", values[i]);
            free_dlistint(head);
            return EXIT_FAILURE;
        }
    }

    printf("Original list:\n");
    print_dlistint(head);
    printf("-----------------\n");

    if (delete_dnodeint_at_index(&head, 5) == -1) {
        fprintf(stderr, "Failed to delete node at index 5\n");
        free_dlistint(head);
        return EXIT_FAILURE;
    }
    printf("List after deleting node at index 5:\n");
    print_dlistint(head);
    printf("-----------------\n");


    free_dlistint(head);

    return EXIT_SUCCESS;
}
