#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - Adds a node to the beginning of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Integer value for the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    dlistint_t *current_head = *head;

    if (current_head != NULL)
    {
        while (current_head->prev != NULL)
            current_head = current_head->prev;
    }

    new_node->next = current_head;

    if (current_head != NULL)
        current_head->prev = new_node;

    *head = new_node;

    return (new_node);
}

