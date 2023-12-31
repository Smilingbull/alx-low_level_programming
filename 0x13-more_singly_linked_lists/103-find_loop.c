#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *black, *white;

	if (head == NULL || head->next == NULL)
		return (NULL);

	black = head->next;
	white = (head->next)->next;

	while (white)
	{
		if (black == white)
		{
			black = head;

			while (black != white)
			{
				black = black->next;
				white = white->next;
			}

			return (black);
		}

		black = black->next;
		white = (white->next)->next;
	}

	return (NULL);
}
