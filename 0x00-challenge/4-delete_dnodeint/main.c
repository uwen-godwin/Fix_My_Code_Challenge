#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodes - Add nodes to the end of the list.
 * @head: Pointer to the head of the list.
 */
void add_nodes(dlistint_t **head)
{
	add_dnodeint_end(head, 0);
	add_dnodeint_end(head, 1);
	add_dnodeint_end(head, 2);
	add_dnodeint_end(head, 3);
	add_dnodeint_end(head, 4);
	add_dnodeint_end(head, 98);
	add_dnodeint_end(head, 402);
	add_dnodeint_end(head, 1024);
}

/**
 * delete_nodes - Delete nodes from the list.
 * @head: Pointer to the head of the list.
 */
void delete_nodes(dlistint_t **head)
{
	delete_dnodeint_at_index(head, 5);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
	delete_dnodeint_at_index(head, 0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_nodes(&head);
	print_dlistint(head);
	printf("-----------------\n");
	delete_nodes(&head);
	print_dlistint(head);
	free_dlistint(head);
	return (0);
}
