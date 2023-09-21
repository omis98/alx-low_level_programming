#include <stdlib.h>
#include "lists.h"
/*return number of elements in h : list the len that return the number of elements in link list with pointer to the list*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
