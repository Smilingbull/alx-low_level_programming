#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h) {
    size_t count = 0;

    if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}

